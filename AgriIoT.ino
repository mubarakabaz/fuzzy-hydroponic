// inisialisasi pin sensor PH meter
const int PH_PIN = A0;
float phValue;

//inisialisasi pin Sensor TDS Meter
#include <EEPROM.h>
#include "GravityTDS.h"
#define TDS_PIN A1
GravityTDS gravityTds;
float tdsValue;

// inisialisasi pin sensor Suhu meter
#include <OneWire.h>
#include <DallasTemperature.h>
OneWire pin_DS18B20(5);
DallasTemperature DS18B20(&pin_DS18B20);
// int temperature = 25; // gunakan ini untuk menggunakan library bawaan sensor
int temperature;

// inisialisasi Modul WiFi


// inisisalisasi pin Relay Pompa
#define pompaPHNaik 8
#define pompaPHTurun 9
#define pompaNutrisi 10
#define pompaAirBaku 11

float pab, pna, ppu, ppd;
int wppu, wppd, wpna, wpab;

// inisialisasi variabel untuk menampung nilai setpoint
// yang diterima dari server.
float phSetA, phSetB, tdsSetA, tdsSetB;

// inisialisasi tombol reset pada alat
void(* resetFunc)(void)=0;

// memanggil file fungsi fuzzy yang telah dideklarasikan
#include "FuzzyMainObj.h"
fuzzy_main_obj();

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
