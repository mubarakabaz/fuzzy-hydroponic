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
int spu, spd, sna, sab;

// inisialisasi variabel untuk menampung nilai setpoint
// yang diterima dari server.
// float phSetA, phSetB, tdsSetA, tdsSetB;
float phSetA = 5.5;
float phSetB = 6.5;
float tdsSetA = 950;
float tdsSetB = 1050;

// library ArduinoJSON
// #include <ArduinoJson.h>

// tombol untuk reset
void (* resetFunc) (void) = 0;
