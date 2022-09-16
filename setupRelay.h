void setupRelay(){
    pinMode(pompaPHNaik, OUTPUT); // inisialisasi pin sebagai OUTPUT
    digitalWrite(pompaPHNaik, HIGH); // set relay off
    pinMode(pompaPHTurun, OUTPUT); // inisialisasi pin sebagai OUTPUT
    digitalWrite(pompaPHTurun, HIGH); // set relay off
    pinMode(pompaNutrisi, OUTPUT); // inisialisasi pin sebagai OUTPUT
    digitalWrite(pompaNutrisi, HIGH); // set relay off
    pinMode(pompaAirBaku, OUTPUT); // inisialisasi pin sebagai OUTPUT
    digitalWrite(pompaAirBaku, HIGH); // set relay off
}

