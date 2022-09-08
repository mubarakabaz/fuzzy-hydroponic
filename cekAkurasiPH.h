void cekAkurasiPh(){
    float relevansi_asamkuat = asamkuat->getPertinence();
  float relevansi_asamlemah = asamlemah->getPertinence();
  float relevansi_phnetral = phnetral->getPertinence();
  float relevansi_basalemah = basalemah->getPertinence();
  float relevansi_basakuat = basakuat->getPertinence();

  Serial.println(" ");

  Serial.print("AK: ");Serial.print(relevansi_asamkuat); Serial.print("\t");
  Serial.print("AL: ");Serial.print(relevansi_asamlemah); Serial.print("\t");
  Serial.print("PN: ");Serial.print(relevansi_phnetral); Serial.print("\t");
  Serial.print("BL: ");Serial.print(relevansi_basalemah);Serial.print("\t");
  Serial.print("BK: ");Serial.print(relevansi_basakuat);
  
  Serial.println(" ");
}