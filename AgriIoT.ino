#include "Deklarasi.h"

// inisialisasi tombol reset pada alat
void(* resetFunc)(void)=0;

// memanggil file fungsi fuzzy yang telah dideklarasikan
// -- kelas yang memetakan nilai member fuzzy
#include "FuzzyMainObj.h"
fuzzy_main_obj();

// -- memanggil kelass yang dibutuhkan untuk fungsi fuzzy
#include "FuzzySetInit.h"
#include "FuzzyRuleInit.h"

void setup() {
  Serial.begin(115200); // Komunikasi Serial untuk Debugging

  // inisialisasi pin sensor PH meter
  pinMode(PH_PIN, INPUT);

  // Inisialisasi sensor Suhu
  DS18B20.begin();

  // inisialisasi pin Sensor TDS Meter
  gravityTds.setPin(TDS_PIN);
  gravityTds.setAref(5.0); // nilai referensi tegangan, default arduino 5V
  gravityTds.begin(); // inisialisasi sensor TDS


}

void loop() {
  // put your main code here, to run repeatedly:

}
