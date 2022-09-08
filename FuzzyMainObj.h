void fuzzy_main_obj(){
    #include <Fuzzy.h>
    #include <FuzzyComposition.h>
    #include <FuzzyIO.h>
    #include <FuzzyInput.h>
    #include <FuzzyOutput.h>
    #include <FuzzyRule.h>
    #include <FuzzyRuleAntecedent.h>
    #include <FuzzyRuleConsequent.h>
    #include <FuzzySet.h>

    // inisialisasi nama kelas fuzzy
    Fuzzy *fuzzy_main_obj = new Fuzzy();

    // inisialisasi nilai fuzzy set input pH
    FuzzySet *asamkuat = new FuzzySet(0, 0, 0, 3);
    FuzzySet *asamlemah = new FuzzySet(0, 3, 3, 5.5);
    FuzzySet *phnetral = new FuzzySet(4, 5.5, 6.5, 8.5);
    FuzzySet *basalemah = new FuzzySet(6.5, 10, 10, 14);
    FuzzySet *basakuat = new FuzzySet(10, 14, 14, 14);

    // inisialisasi nilai fuzzy set input TDS
    FuzzySet *sangatkurang = new FuzzySet(0, 0, 500, 750);
    FuzzySet *kurang = new FuzzySet(500, 750, 750, 1050);
    FuzzySet *tdsnormal = new FuzzySet(750, 1050, 1400, 1600);
    FuzzySet *banyak = new FuzzySet(1400, 1600, 1600, 2000);
    FuzzySet *sangatbanyak = new FuzzySet(1600, 1800, 2000, 2000);

    // inisialisasi nilai output (estimasi waktu) aktif pompa pH naik (basa)
    FuzzySet *ppumati = new FuzzySet(0, 0, 0, 10);
    FuzzySet *ppusedang = new FuzzySet(7.5, 15, 15, 22.5);
    FuzzySet *ppulama = new FuzzySet(20, 30, 30, 30);

    // inisialisasi nilai output (estimasi waktu) Pompa PH Turun (Asam)
    FuzzySet *ppdmati = new FuzzySet(0, 0, 0, 10);
    FuzzySet *ppdsedang = new FuzzySet(7.5, 15, 15, 22.5);
    FuzzySet *ppdlama = new FuzzySet(20, 30, 30, 30);

    // inisialisasi nilai output (estimasi waktu) Pompa Air Baku
    FuzzySet *pabmati = new FuzzySet(0, 0, 0, 10);
    FuzzySet *pabsedang = new FuzzySet(7.5, 15, 15, 22.5);
    FuzzySet *pablama = new FuzzySet(20, 30, 30, 30);

    // inisialisasi nilai output Pompa Nutrisi (estimasi waktu)
    FuzzySet *ppnmati = new FuzzySet(0, 0, 0, 10);
    FuzzySet *ppnsedang = new FuzzySet(7.5, 15, 15, 22.5);
    FuzzySet *ppnlama = new FuzzySet(20, 30, 30, 30);
}