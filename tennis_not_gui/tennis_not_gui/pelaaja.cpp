#include "pelaaja.h"
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

int Pelaaja::pelikavereiden_maara()
{
    return pelikaverit_.size();
}
