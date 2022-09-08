void ProsesDefuzzifikasi(){
    // proses defuzzifikasi pada nilai output
float ppu = fuzzy_main_obj->defuzzify(1);
float ppd = fuzzy_main_obj->defuzzify(2);
float pna = fuzzy_main_obj->defuzzify(3);
float pab = fuzzy_main_obj->defuzzify(4);

// bulatkan nilai output yang dihasilkan
int waktu_ppu = round(ppu);
int waktu_ppd = round(ppd);
int waktu_pna = round(pna);
int waktu_pab = round(pab);

}