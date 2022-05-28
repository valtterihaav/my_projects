#include "Pelaaja.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <memory>
#include <algorithm>



const std::string TIEDOSTO = "pelaajat.txt";

void luo_pelaajat_oliot(std::vector<std::string> kaikki_pelaajat)
{
    int pelaajien_lkm = kaikki_pelaajat.size();
    std::map<std::string, std::shared_ptr<Pelaaja> > pelaajat;

    for (int i = 0; i < pelaajien_lkm; ++i)
    {
        std::string pelaajan_nimi = kaikki_pelaajat.at(i);
        std::shared_ptr<Pelaaja> yksi_pelaaja = std::make_shared<Pelaaja>(pelaajan_nimi, kaikki_pelaajat);
        pelaajat.insert({pelaajan_nimi, yksi_pelaaja});
    }

    
    
}

int main() {
    std::ifstream tiedosto_o(TIEDOSTO);

    // Jos tiedostoa ei voida jostain syystä lukea, lopetetaan ohjelma ja 
    // tulostetaan virheilmoitus
    if (!tiedosto_o)
    {
        std::cout << "Tapahtui virhe" << std::endl;
        return EXIT_FAILURE;
    }

    // Alustetaan tiedoston lukemisen yksi rivi ja kaikkien pelaajien
    // muodostoma vektori
    std::string rivi;
    std::vector<std::string> kaikki_pelaajat;

    // käydään tiedosto läpi ja lisätään pelaajat vektoriin
    while (std::getline(tiedosto_o, rivi))
    {
        kaikki_pelaajat.push_back(rivi);
    }
    tiedosto_o.close();
    std::cout << "Helloworld" << std::endl;
    
    return EXIT_SUCCESS;
}