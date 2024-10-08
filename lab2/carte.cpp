#include "carte.h"
#include <cstring>
#include <iostream>
Carte::Carte() {
    this->set("Fara titlu", "Fara autor", 1970, 0);
}

Carte::Carte(const char t[], const char a[], int an, int nrPagini){
    this->set(t, a, an, nrPagini);
}

//seteaza datele cartii
void Carte::set(const char t[], const char a[], int an, int nrPagini){
    strcpy(this->titlu, t);
    strcpy(this->autor, a);
    this->anPublicare = an;
    this->numarPagini = nrPagini;
}

//get informatii despre carte

const char* Carte::getTitlu() {
    return titlu;
}


const char* Carte::getAutor() {
    return autor;
}

int Carte::getAnPublicare() {
    return anPublicare;
}

int Carte::getNumarPagini() {
    return numarPagini;
}

//afiseaza info
void Carte::afiseazaInfo() {
    std::cout << "Titlu: " << titlu << std::endl
              << "Autor: " << autor << std::endl
              << "An publicare: " << anPublicare << std::endl
              << "Nr pagini: " << numarPagini << std::endl;
}

