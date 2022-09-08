void ProsesFuzzifikasi(){
// memetakan nilai input yang akan di fuzzifikasikan
fuzzy_main_obj->setInput(1, phValue);
fuzzy_main_obj->setInput(2, tdsValue);

// memulai proses fuzzifikasi, komposisi, dan inferensi
fuzzy_main_obj->fuzzify();
}
