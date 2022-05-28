#ifndef PELAAJA_H
#define PELAAJA_H
#include <vector>
#include <string>
#include <iostream>

#pragma once

class Pelaaja
{
public:
    Pelaaja(std::string nimi, std::vector<std::string> pelikaverit);
    ~Pelaaja();
    std::string return_name();

private:
    std::string nimi_;
    std::vector<std::string> pelikaverit_;
};

#endif