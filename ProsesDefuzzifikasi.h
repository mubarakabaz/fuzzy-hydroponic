void prosesDefuzzy(){
    // proses defuzzifikasi pada nilai output
    float ppu = fuzzy_main_obj->defuzzify(1);
    float ppd = fuzzy_main_obj->defuzzify(2);
    float pna = fuzzy_main_obj->defuzzify(3);
    float pab = fuzzy_main_obj->defuzzify(4);

    // bulatkan nilai output yang dihasilkan
    int pb_ppu = round(ppu);
    int pb_ppd = round(ppd);
    int pb_pna = round(pna);
    int pb_pab = round(pab);

}
