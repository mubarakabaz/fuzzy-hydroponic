#include "WiFiEsp.h"

void head_setup_wifi(){
    char ssid[] = "Dattulu"; //  your network SSID (name)
    char pass[] = "bismillah";    // your network password
    char server[] = "127.0.0.1:8000";  // alamat ip server (localhost)

    String text = "";
    String Respon = "";
    bool responDariServer = false;

    bool statusKomunikasiWiFi = false;
    long waktuMulai;
    long waktuMintaData = 5000L; // minta data setiap 5 detik

    WiFiEspClient client;
    int status = WL_IDLE_STATUS;
}

void setup_wifi(){
    Serial1.begin(9600);
    Serial.println("Inisialisasi WiFi...");

    // Serial debugging untuk mengecek koneksi WiFi
    WiFi.init(&Serial1);

    if(WiFi.status() == WL_NO_SHIELD){
        Serial.println("WiFi shield tidak terdeteksi");
        while(true);
    }

    while(status != WL_CONNECTED){
        Serial.print("Mencoba terhubung ke ");
        Serial.println(ssid);
        status = WiFi.begin(ssid, pass);
    }

    Serial.println("Berhasil terhubung ke WiFi");

    printWifiStatus();
    waktuMulai = millis();
}

void tunggu_inputan_wifi(){
    while(client.available()){
        char c = client.read();
        Serial.write(c);
        Respon += c;
    }
}

void printWifiStatus(){
    Serial.println("Status Koneksi WiFi:");
    Serial.println("SSID: ");
    Serial.print(WiFi.SSID());

    IPAddress ip = WiFi.localIP();
    Serial.print("IP Address: ");
    Serial.println(ip);

    long rssi = WiFi.RSSI();
    Serial.print("Signal Strength (RSSI):");
    Serial.print(rssi);
    Serial.println(" dBm");

    IPAdress gateway = WiFi.gatewayIP();
    Serial.print("Gateway IP Address: ");
    Serial.println(gateway);
    Serial.println("========================");
}

