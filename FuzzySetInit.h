void FuzzySetInit(){
    // inisialisasi Fuzzy Set variabel pH
    FuzzyInput *set_PH = new FuzzyInput(1);
    set_PH->addFuzzySet(asamkuat);
    set_PH->addFuzzySet(asamlemah);
    set_PH->addFuzzySet(phnetral);
    set_PH->addFuzzySet(basaklemah);
    set_PH->addFuzzySet(basakuat);
    fuzzy_main_obj->addFuzzyInput(set_PH);

    // inisialisasai fuzzy set variabel tds
    FuzzyInput *set_TDS = new FuzzyInput(2);
    set_TDS->addFuzzySet(sangatkurang);
    set_TDS->addFuzzySet(kurang);
    set_TDS->addFuzzySet(tdsnormal);
    set_TDS->addFuzzySet(banyak);
    set_TDS->addFuzzySet(sangatbanyak);
    fuzzy_main_obj->addFuzzyInput(set_TDS);

    // inisialisasi fuzzy set variabel untuk nilai output 1
    // pompa pH naik
    FuzzyOutput *set_PPU = new FuzzyOutput(1);
    set_PPU->addFuzzySet(ppulama);
    set_PPU->addFuzzySet(ppusedang);
    set_PPU->addFuzzySet(ppulama);
    fuzzy_main_obj->addFuzzyOutput(set_PPU);

    // inisialisasi fuzzy set variabel untuk nilai output 2
    // pompa pH turun
    FuzzyOutput *set_PPD = new FuzzyOutput(2);
  set_PPD->addFuzzySet(ppdlama);
  set_PPD->addFuzzySet(ppdsedang);
  set_PPD->addFuzzySet(ppdlama);
  fuzzy_main_obj->addFuzzyOutput(set_PPD);

  // inisialisasi fuzzy set variabel untuk nilai output 3
    // pompa Nutrisi
FuzzyOutput *set_PPN = new FuzzyOutput(3);
  set_PPN->addFuzzySet(ppnlama);
  set_PPN->addFuzzySet(ppnsedang);
  set_PPN->addFuzzySet(ppnlama);
  fuzzy_main_obj->addFuzzyOutput(set_PPN);

// inisialisasi fuzzy set variabel untuk nilai output 4
    // pompa air baku
FuzzyOutput *set_PAB = new FuzzyOutput(4);
  set_PAB->addFuzzySet(pablama);
  set_PAB->addFuzzySet(pabsedang);
  set_PAB->addFuzzySet(pablama);
  fuzzy_main_obj->addFuzzyOutput(set_PAB);
}