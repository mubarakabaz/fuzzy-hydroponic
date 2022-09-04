void FuzzyRuleInit(){
    // Membuat FuzzyRule //////////////////////// 01
    FuzzyRuleAntecedent *AK_SK = new FuzzyRuleAntecedent();
    AK_SK->joinWithAND(asamkuat, sangatkurang);

    FuzzyRuleConsequent *LMLM = new FuzzyRuleConsequent();
    LMLM->addOutput(ppulama);
    LMLM->addOutput(ppdmati);
    LMLM->addOutput(ppnlama);
    LMLM->addOutput(pabmati);

    FuzzyRule *fzRule1 = new FuzzyRule(1, AK_SK, LMLM);
    fuzzy_main_obj->addFuzzyRule(fzRule1);
    
    // Membuat FuzzyRule //////////////////////// 02
    FuzzyRuleAntecedent *AK_K = new FuzzyRuleAntecedent();
    AK_K->joinWithAND(asamkuat, kurang);

    FuzzyRuleConsequent *LMCM = new FuzzyRuleConsequent();
    LMCM->addOutput(ppulama);
    LMCM->addOutput(ppdmati);
    LMCM->addOutput(ppnsedang);
    LMCM->addOutput(pabmati);

    FuzzyRule *fzRule2 = new FuzzyRule(2, AK_K, LMCM);
    fuzzy_main_obj->addFuzzyRule(fzRule2);
    
    // Membuat FuzzyRule //////////////////////// 03
    FuzzyRuleAntecedent *AK_TN = new FuzzyRuleAntecedent();
    AK_TN->joinWithAND(asamkuat, tdsnormal);

    FuzzyRuleConsequent *LMMM = new FuzzyRuleConsequent();
    LMMM->addOutput(ppulama);
    LMMM->addOutput(ppdmati);
    LMMM->addOutput(ppnmati);
    LMMM->addOutput(pabmati);

    FuzzyRule *fzRule3 = new FuzzyRule(3, AK_TN, LMMM);
    fuzzy_main_obj->addFuzzyRule(fzRule3);
    
    // Membuat FuzzyRule //////////////////////// 04
    FuzzyRuleAntecedent *AK_B = new FuzzyRuleAntecedent();
    AK_B->joinWithAND(asamkuat, banyak);

    FuzzyRuleConsequent *LMMC = new FuzzyRuleConsequent();
    LMMC->addOutput(ppulama);
    LMMC->addOutput(ppdmati);
    LMMC->addOutput(ppnmati);
    LMMC->addOutput(pabsedang);

    FuzzyRule *fzRule4 = new FuzzyRule(4, AK_B, LMMC);
    fuzzy_main_obj->addFuzzyRule(fzRule4);
    
    // Membuat FuzzyRule //////////////////////// 05
    FuzzyRuleAntecedent *AK_SB = new FuzzyRuleAntecedent();
    AK_SB->joinWithAND(asamkuat, sangatbanyak);

    FuzzyRuleConsequent *LMML = new FuzzyRuleConsequent();
    LMML->addOutput(ppulama);
    LMML->addOutput(ppdmati);
    LMML->addOutput(ppnmati);
    LMML->addOutput(pablama);

    FuzzyRule *fzRule5 = new FuzzyRule(5, AK_SB, LMML);
    fuzzy_main_obj->addFuzzyRule(fzRule5);
    
    // Membuat FuzzyRule //////////////////////// 06
    FuzzyRuleAntecedent *AL_SK = new FuzzyRuleAntecedent();
    AL_SK->joinWithAND(asamlemah, sangatkurang);

    FuzzyRuleConsequent *CMLM = new FuzzyRuleConsequent();
    CMLM->addOutput(ppusedang);
    CMLM->addOutput(ppdmati);
    CMLM->addOutput(ppnlama);
    CMLM->addOutput(pabmati);

    FuzzyRule *fzRule6 = new FuzzyRule(6, AL_SK, CMLM);
    fuzzy_main_obj->addFuzzyRule(fzRule6);
    
    // Membuat FuzzyRule //////////////////////// 07
    FuzzyRuleAntecedent *AL_K = new FuzzyRuleAntecedent();
    AL_K->joinWithAND(asamlemah, kurang);

    FuzzyRuleConsequent *CMCM = new FuzzyRuleConsequent();
    CMCM->addOutput(ppusedang);
    CMCM->addOutput(ppdmati);
    CMCM->addOutput(ppnsedang);
    CMCM->addOutput(pabmati);

    FuzzyRule *fzRule7 = new FuzzyRule(7, AL_K, CMCM);
    fuzzy_main_obj->addFuzzyRule(fzRule7);
    
    // Membuat FuzzyRule //////////////////////// 08
    FuzzyRuleAntecedent *AL_N = new FuzzyRuleAntecedent();
    AL_N->joinWithAND(asamlemah, tdsnormal);

    FuzzyRuleConsequent *CMMM = new FuzzyRuleConsequent();
    CMMM->addOutput(ppusedang);
    CMMM->addOutput(ppdmati);
    CMMM->addOutput(ppnmati);
    CMMM->addOutput(pabmati);

    FuzzyRule *fzRule8 = new FuzzyRule(8, AL_N, CMMM);
    fuzzy_main_obj->addFuzzyRule(fzRule8);
    
    // Membuat FuzzyRule //////////////////////// 09
    FuzzyRuleAntecedent *AL_B = new FuzzyRuleAntecedent();
    AL_B->joinWithAND(asamlemah, banyak);

    FuzzyRuleConsequent *CMMC = new FuzzyRuleConsequent();
    CMMC->addOutput(ppusedang);
    CMMC->addOutput(ppdmati);
    CMMC->addOutput(ppnmati);
    CMMC->addOutput(pabsedang);

    FuzzyRule *fzRule9 = new FuzzyRule(9, AL_B, CMMC);
    fuzzy_main_obj->addFuzzyRule(fzRule9);
    
    // Membuat FuzzyRule //////////////////////// 10
    FuzzyRuleAntecedent *AL_SB = new FuzzyRuleAntecedent();
    AL_SB->joinWithAND(asamlemah, sangatbanyak);

    FuzzyRuleConsequent *CMML = new FuzzyRuleConsequent();
    CMML->addOutput(ppusedang);
    CMML->addOutput(ppdmati);
    CMML->addOutput(ppnmati);
    CMML->addOutput(pablama);

    FuzzyRule *fzRule10 = new FuzzyRule(10, AL_SB, CMML);
    fuzzy_main_obj->addFuzzyRule(fzRule10);
    
    // Membuat FuzzyRule //////////////////////// 11
    FuzzyRuleAntecedent *N_SK = new FuzzyRuleAntecedent();
    N_SK->joinWithAND(phnetral, sangatkurang);

    FuzzyRuleConsequent *MMLM = new FuzzyRuleConsequent();
    MMLM->addOutput(ppumati);
    MMLM->addOutput(ppdmati);
    MMLM->addOutput(ppnlama);
    MMLM->addOutput(pabmati);

    FuzzyRule *fzRule11 = new FuzzyRule(11, N_SK, MMLM);
    fuzzy_main_obj->addFuzzyRule(fzRule11);
    
    // Membuat FuzzyRule //////////////////////// 12
    FuzzyRuleAntecedent *N_K = new FuzzyRuleAntecedent();
    N_K->joinWithAND(phnetral, kurang);

    FuzzyRuleConsequent *MMCM = new FuzzyRuleConsequent();
    MMCM->addOutput(ppumati);
    MMCM->addOutput(ppdmati);
    MMCM->addOutput(ppnsedang);
    MMCM->addOutput(pabmati);

    FuzzyRule *fzRule12 = new FuzzyRule(12, N_K, MMCM);
    fuzzy_main_obj->addFuzzyRule(fzRule12);
    
    // Membuat FuzzyRule //////////////////////// 13
    FuzzyRuleAntecedent *N_N = new FuzzyRuleAntecedent();
    N_N->joinWithAND(phnetral, tdsnormal);

    FuzzyRuleConsequent *MMMM = new FuzzyRuleConsequent();
    MMMM->addOutput(ppumati);
    MMMM->addOutput(ppdmati);
    MMMM->addOutput(ppnmati);
    MMMM->addOutput(pabmati);

    FuzzyRule *fzRule13 = new FuzzyRule(13, N_N, MMMM);
    fuzzy_main_obj->addFuzzyRule(fzRule13);
    
    // Membuat FuzzyRule //////////////////////// 14
    FuzzyRuleAntecedent *N_B = new FuzzyRuleAntecedent();
    N_B->joinWithAND(phnetral, banyak);

    FuzzyRuleConsequent *MMMC = new FuzzyRuleConsequent();
    MMMC->addOutput(ppumati);
    MMMC->addOutput(ppdmati);
    MMMC->addOutput(ppnmati);
    MMMC->addOutput(pabsedang);

    FuzzyRule *fzRule14 = new FuzzyRule(14, N_B, MMMC);
    fuzzy_main_obj->addFuzzyRule(fzRule14);
    
    // Membuat FuzzyRule //////////////////////// 15
    FuzzyRuleAntecedent *N_SB = new FuzzyRuleAntecedent();
    N_SB->joinWithAND(phnetral, sangatbanyak);

    FuzzyRuleConsequent *MMML = new FuzzyRuleConsequent();
    MMML->addOutput(ppumati);
    MMML->addOutput(ppdmati);
    MMML->addOutput(ppnmati);
    MMML->addOutput(pablama);

    FuzzyRule *fzRule15 = new FuzzyRule(15, N_SB, MMML);
    fuzzy_main_obj->addFuzzyRule(fzRule15);
    
    // Membuat FuzzyRule //////////////////////// 16
    FuzzyRuleAntecedent *BL_SK = new FuzzyRuleAntecedent();
    BL_SK->joinWithAND(basalemah, sangatkurang);

    FuzzyRuleConsequent *MCLM = new FuzzyRuleConsequent();
    MCLM->addOutput(ppumati);
    MCLM->addOutput(ppdsedang);
    MCLM->addOutput(ppnlama);
    MCLM->addOutput(pabmati);
    
    FuzzyRule *fzRule16 = new FuzzyRule(16, BL_SK, MCLM);
    fuzzy_main_obj->addFuzzyRule(fzRule16);
    
    // Membuat FuzzyRule //////////////////////// 17
    FuzzyRuleAntecedent *BL_K = new FuzzyRuleAntecedent();
    BL_K->joinWithAND(basalemah, kurang);

    FuzzyRuleConsequent *MCCM = new FuzzyRuleConsequent();
    MCCM->addOutput(ppumati);
    MCCM->addOutput(ppdsedang);
    MCCM->addOutput(ppnsedang);
    MCCM->addOutput(pabmati);

    FuzzyRule *fzRule17 = new FuzzyRule(17, BL_K, MCCM);
    fuzzy_main_obj->addFuzzyRule(fzRule17);
    
    // Membuat FuzzyRule //////////////////////// 18
    FuzzyRuleAntecedent *BL_N = new FuzzyRuleAntecedent();
    BL_N->joinWithAND(basalemah, tdsnormal);

    FuzzyRuleConsequent *MCMM = new FuzzyRuleConsequent();
    MCMM->addOutput(ppumati);
    MCMM->addOutput(ppdsedang);
    MCMM->addOutput(ppnmati);
    MCMM->addOutput(pabmati);

    FuzzyRule *fzRule18 = new FuzzyRule(18, BL_N, MCMM);
    fuzzy_main_obj->addFuzzyRule(fzRule18);
    
    // Membuat FuzzyRule //////////////////////// 19
    FuzzyRuleAntecedent *BL_B = new FuzzyRuleAntecedent();
    BL_B->joinWithAND(basalemah, banyak);

    FuzzyRuleConsequent *MCMC = new FuzzyRuleConsequent();
    MCMC->addOutput(ppumati);
    MCMC->addOutput(ppdsedang);
    MCMC->addOutput(ppnmati);
    MCMC->addOutput(pabsedang);

    FuzzyRule *fzRule19 = new FuzzyRule(19, BL_B, MCMC);
    fuzzy_main_obj->addFuzzyRule(fzRule19);
    
    // Membuat FuzzyRule //////////////////////// 20
    FuzzyRuleAntecedent *BL_SB = new FuzzyRuleAntecedent();
    BL_SB->joinWithAND(basalemah, sangatbanyak);

    FuzzyRuleConsequent *MCML = new FuzzyRuleConsequent();
    MCML->addOutput(ppumati);
    MCML->addOutput(ppdsedang);
    MCML->addOutput(ppnmati);
    MCML->addOutput(pablama);

    FuzzyRule *fzRule20 = new FuzzyRule(20, BL_SB, MCML);
    fuzzy_main_obj->addFuzzyRule(fzRule20);
    
    // Membuat FuzzyRule //////////////////////// 21
    FuzzyRuleAntecedent *BK_SK = new FuzzyRuleAntecedent();
    BK_SK->joinWithAND(basakuat, sangatkurang);

    FuzzyRuleConsequent *MLLM = new FuzzyRuleConsequent();
    MLLM->addOutput(ppumati);
    MLLM->addOutput(ppdlama);
    MLLM->addOutput(ppnlama);
    MLLM->addOutput(pabmati);

    FuzzyRule *fzRule21 = new FuzzyRule(21, BK_SK, MLLM);
    fuzzy_main_obj->addFuzzyRule(fzRule21);
    
    // Membuat FuzzyRule //////////////////////// 22
    FuzzyRuleAntecedent *BK_K = new FuzzyRuleAntecedent();
    BK_K->joinWithAND(basakuat, kurang);

    FuzzyRuleConsequent *MLCM = new FuzzyRuleConsequent();
    MLCM->addOutput(ppumati);
    MLCM->addOutput(ppdlama);
    MLCM->addOutput(ppnsedang);
    MLCM->addOutput(pabmati);

    FuzzyRule *fzRule22 = new FuzzyRule(22, BK_K, MLCM);
    fuzzy_main_obj->addFuzzyRule(fzRule22);
    
    // Membuat FuzzyRule //////////////////////// 23
    FuzzyRuleAntecedent *BK_N = new FuzzyRuleAntecedent();
    BK_N->joinWithAND(basakuat, tdsnormal);

    FuzzyRuleConsequent *MLMM = new FuzzyRuleConsequent();
    MLMM->addOutput(ppumati);
    MLMM->addOutput(ppdlama);
    MLMM->addOutput(ppnmati);
    MLMM->addOutput(pabmati);

    FuzzyRule *fzRule23 = new FuzzyRule(23, BK_N, MLMM);
    fuzzy_main_obj->addFuzzyRule(fzRule23);
    
    // Membuat FuzzyRule //////////////////////// 24
    FuzzyRuleAntecedent *BK_B = new FuzzyRuleAntecedent();
    BK_B->joinWithAND(basakuat, banyak);

    FuzzyRuleConsequent *MLMC = new FuzzyRuleConsequent();
    MLMC->addOutput(ppumati);
    MLMC->addOutput(ppdlama);
    MLMC->addOutput(ppnmati);
    MLMC->addOutput(pabsedang);

    FuzzyRule *fzRule24 = new FuzzyRule(24, BK_B, MLMC);
    fuzzy_main_obj->addFuzzyRule(fzRule24);
    
    // Membuat FuzzyRule //////////////////////// 25
    FuzzyRuleAntecedent *BK_SB = new FuzzyRuleAntecedent();
    BK_SB->joinWithAND(basakuat, sangatbanyak);

    FuzzyRuleConsequent *MLML = new FuzzyRuleConsequent();
    MLML->addOutput(ppumati);
    MLML->addOutput(ppdlama);
    MLML->addOutput(ppnmati);
    MLML->addOutput(pablama);

    FuzzyRule *fzRule25 = new FuzzyRule(25, BK_SB, MLML);
    fuzzy_main_obj->addFuzzyRule(fzRule25);
}