#include "Deklarasi.h"

// memanggil file fungsi fuzzy yang telah dideklarasikan
// -- kelas yang memetakan nilai member fuzzy
#include "FuzzyMainObj.h"
fuzzy_main_obj();

// -- memanggil kelass yang dibutuhkan untuk fungsi fuzzy
#include "FuzzySetInit.h"
#include "FuzzyRuleInit.h"

// -- memanggil kelas setup
#include "SetupSensor.h"
#include "SetupRelay.h"

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
  // put your main code here, to run repeatedly:

}
