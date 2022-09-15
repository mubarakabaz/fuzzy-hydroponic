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
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
