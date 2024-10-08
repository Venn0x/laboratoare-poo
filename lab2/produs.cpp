#include "produs.h"

#include <cstring>
#include <iostream>

// Constructor fara param
Produs::Produs() {
    strcpy(denumire, "Necunoscut");
    strcpy(categorie, "Necunoscuta");
    pret = 0.0;
    cantitateStoc = 0;
}

// Constructor cu parametru
Produs::Produs(const char d[], const char c[], double p, int stoc) {
    strcpy(denumire, d);
    strcpy(categorie, c);
    pret = p;
    cantitateStoc = stoc;
}

// Metoda de set
void Produs::set(const char denumire[], const char categorie[], double pret, int cantitateStoc) {
    strcpy(this->denumire, denumire);
    strcpy(this->categorie, categorie);
    this->pret = pret;
    this->cantitateStoc = cantitateStoc;
}

// Metoda get pentru denumire
const char* Produs::getDenumire() {
    return denumire;
}

// Metoda get pentru categorie
const char* Produs::getCategorie() {
    return categorie;
}

// Metoda get pentru pret
double Produs::getPret() {
    return pret;
}

// Metoda get pentru cantitate stoc
int Produs::getCantitateStoc() {
    return cantitateStoc;
}

// Metoda de afisare
void Produs::afiseazaInfo() {
    std::cout << "Denumire: " << denumire << std::endl
              << "Categorie: " << categorie << std::endl
              << "Pret: " << pret << " lei" << std::endl
              << "Cantitate Stoc: " << cantitateStoc << " bucati" << std::endl;
}
