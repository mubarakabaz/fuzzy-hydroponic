#include "Deklarasi.h"

// memanggil file fungsi fuzzy yang telah dideklarasikan
// -- kelas yang memetakan nilai member fuzzy
#include "FuzzyMainObj.h"
fuzzy_main_obj();

// -- memanggil kelass yang dibutuhkan untuk fungsi fuzzy
#include "FuzzySetInit.h"
#include "FuzzyRuleInit.h"
#include "ProsesFuzzifikasi.h"
#include "ProsesDefuzzifikasi.h"
#include "cekAkurasiPH.h"
#include "cekAkurasiTDS.h"

// -- memanggil kelas setup
#include "SetupSensor.h"
#include "SetupRelay.h"
#include "SetupWiFi.h"

void setup() {
  Serial.begin(115200); // Komunikasi Serial untuk Debugging

  setupSensor(); // inisialisasi sensor
  setupRelay(); // inisialisasi relay

  // Setting LCD jika pertama kali dihidupkan
  lcd.begin();
  lcd.setCursor(0,0);
  lcd.print("Selamat Datang");
  lcd.setCursor(0,1);
  lcd.print("Di Sistem Cerdas");
  lcd.setCursor(0,2);
  lcd.print("Connecting...");

  // inisialisasi WiFi (Set SSID & Password WiFi)

  // Setting lcd jika berhasil terhubung ke WiFi
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("Berhasil");
  lcd.setCursor(0,2);
  lcd.print("Terhubung!");
  
  delay(1000);
  
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Selamat Datang");
  lcd.setCursor(0,1);
  lcd.print("mubarakabaz.my.id");

  delay(1000);

  lcd.clear();

  // Memulai proses Fuzzifikasi
  // panggil kelas FuzzySetInit & FuzzyRuleInit
  fuzzySetInit();
  fuzzyRuleInit();

  // EEPROM | Menampilkan data yang ditampung
  phSetA = EEPROM.read(201);
  phSetB = EEPROM.read(202);
  tdsSetA = EEPROM.read(203);
  tdsSetB = EEPROM.read(204);
  tdsSetA = tdsSetA * 10;
  tdsSetB = tdsSetB * 10;

}

void loop() {
  // Pembacaan sensor Suhu
  DS18B20.requestTemperatures();
  temperature = DS18B20.getTempByIndex(0);

  // Pembacaan sensor pH
  int ph = analogRead(PH_PIN);
  float voltage = 5 / 1024.0 * ph;
  // kalibrasi sensor ph (menggunakan regresi linear)
  // -5.4 -> nilai minimum pembacaan sensor 
  phValue = (-5.400 * voltage) + 18.14;

  // Pembacaan sensor TDS
  gravityTds.setAdcRange(1024); 
  gravityTds.setTemperature(temperature);
  gravityTds.update();
  tdsValue = gravityTds.getTdsValue();

  // Logika pompa

  

  // Print Debugging untuk mengecek nilai input
  // setiap 5 detik
  if(millis() - waktuMulai > 5000U){
    waktuMulai = millis();

    // proses fuzzifikasi
    prosesFuzzy();

    // cek nilai fuzzifikasi
    cekAkurasiPh();
    cekAkurasiTds();

    // proses Defuzzifikasi
    prosesDefuzzy();

    Serial.println("=====+ copy & paste nilai ke matlab (ph | tds) +=====");
    Serial.print(phValue); Serial.print(" "); Serial.print("tdsValue");
    Serial.println(" ");
    
    // tampilkan di LCD
    lcd.setCursor(0, 0);
    lcd.print("PH: "); lcd.print(phValue, 1); lcd.print(" ");
    lcd.setCursor(8, 0);
    lcd.print("TDS: "); lcd.print(tdsValue, 1); lcd.print(" ");
    lcd.setCursor(0, 1);
    lcd.print("Suhu: "); lcd.print(temperature, 1); lcd.print(" ");
    lcd.setCursor(10, 1);
    lcd.print(phSetA, 1); lcd.print("<>"); lcd.print(phSetB, 1);
    lcd.setCursor(0, 2);
    // ingat untuk mengubah nilai PU, PD, NA, AB
    lcd.print("PU "); lcd.print(spu); lcd.print(" "); lcd.print("PD "); lcd.print(spd); lcd.print(" ");
    lcd.setCursor(11, 2);
    lcd.print(tdsSetA,1); lcd.print("<>"); lcd.print(tdsSetB,1);
    lcd.setCursor(0, 3);
    lcd.print("NA "); lcd.print(sna); lcd.print("AB "); lcd.print(sab);
    lcd.setCursor(18, 3);
    lcd.print("AAM");
  }
}
