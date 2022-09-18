void setupSensor(){
    // inisialisasi pin sensor PH meter
  pinMode(PH_PIN, INPUT);

  // Inisialisasi sensor Suhu
  DS18B20.begin();

  // inisialisasi pin Sensor TDS Meter
  gravityTds.setPin(TDS_PIN);
  gravityTds.setAref(5.0); // nilai referensi tegangan, default arduino 5V
  gravityTds.begin(); // inisialisasi sensor TDS
}