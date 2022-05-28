#include "Pelaaja.h"
#include <vector>
#include <string>
#include <iostream>

Pelaaja::Pelaaja(std::string nimi, std::vector<std::string> pelikaverit):
    nimi_(nimi), pelikaverit_(pelikaverit) {}


Pelaaja::~Pelaaja()
{

}

std::string Pelaaja::return_name()
{
    return nimi_;
}
