void cekAkurasiTDS(){
    float relevansi_sangatkurang = sangatkurang->getPertinence();
  float relevansi_kurang = kurang->getPertinence();
  float relevansi_tdsnormal = tdsnormal->getPertinence();
  float relevansi_banyak = banyak->getPertinence();
  float relevansi_sangatbanyak = sangatbanyak->getPertinence();

  Serial.print("SK: ");Serial.print(relevansi_sangatkurang);Serial.print("\t");
  Serial.print("K: ");Serial.print(relevansi_kurang);Serial.print("\t");
  Serial.print("TN: ");Serial.print(relevansi_tdsnormal);Serial.print("\t");
  Serial.print("B: ");Serial.print(relevansi_banyak);Serial.print("\t");
  Serial.print("SB: ");Serial.print(relevansi_sangatbanyak);
  
  Serial.println(" ");
  Serial.println(" ");
}