#include <iostream>
#include <cstring>
#include "Elev.h"

Elev::Elev() {
    std::cout << "Constructor elev implicit apelat." << std::endl;
    nume = NULL;
    scoala = NULL;
    note = NULL;
    n = 0;
}

Elev::Elev(const char* nume, const char* scoala, int* note, int n) {
    std::cout << "Constructor elev cu parametru apelat." << std::endl;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);

    this->scoala = new char[strlen(scoala) + 1];
    strcpy(this->scoala, scoala);
    this->n = n;
    this->note = new int[n];
    for(int i = 0; i < n; i++) {
        this->note[i] = note[i];
    }


}

Elev::Elev(const Elev& other) {
    std::cout << "Constructor elev de copiere apelat." << std::endl;
    nume = new char[strlen(other.nume) + 1];
    strcpy(nume, other.nume);

    scoala = new char[strlen(other.nume) + 1];
    strcpy(scoala, other.scoala);
    n = other.n;
    note = new int[other.n];
    for(int i = 0; i < n; i++){
        note[i] = other.note[i];
    }

}

Elev::~Elev() {
    std::cout << "Destructor elev apelat." << std::endl;
    delete[] nume;
    delete[] scoala;
    delete[] note;

}

Elev& Elev::operator=(const Elev& other) {
    std::cout << "Operatorul elev de atribuire apelat." << std::endl;
    if (this != &other) {
        delete[] nume;
        delete[] scoala;
        delete[] note;

        nume = new char[strlen(other.nume) + 1];
        strcpy(nume, other.nume);

        scoala = new char[strlen(other.nume) + 1];
        strcpy(scoala, other.scoala);

        n = other.n;
        note = new int[other.n];
        for(int i = 0; i < n; i++){
            note[i] = other.note[i];
        }
    }
    return *this;
}

const char* Elev::getNume() const{
    return nume;
}


const char* Elev::getScoala()  const{
    return scoala;
}

int* Elev::getNote()const{
    return note;
}

int Elev::getNumarNote() const{
    return n;
}


void Elev::setNume(const char* numeNou){
    delete[] nume;
    nume = new char[strlen(numeNou)];
    strcpy(nume, numeNou);
}

void Elev::setScoala(const char* scoalaNou){
    delete[] scoala;
    scoala = new char[strlen(scoalaNou)];
    strcpy(scoala, scoalaNou);
}

void Elev::setNote(int* noteNou, int nNou){
    delete[] note;
    n = nNou;
    note = new int[n];
    for(int i = 0; i < n; i++){
            note[i] = noteNou[i];
    }
}

void Elev::afisare() const {
    if(nume) {
        std::cout << "Nume: " << nume;
    }
    else {
        std::cout << "Nume: nedefinit";
    }


    if(scoala) {
        std::cout << ", Scoala: " << scoala;
    }
    else {
        std::cout << ", Scoala: nedefinit";
    }


    std::cout <<", Note: ";
    for(int i = 0; i < n; i++) {
        std::cout << note[i] << " ";
    }
    std::cout<<std::endl;
}

double Elev::calculareMedie() const {
    double medie = 0.0;
    for(int i = 0; i < n; i++) {
        medie += note[i];
    }
    medie /= n;
    return medie;
}

int Elev::notaMinima() const {
    if(n == 0) return 0;
    int nota_min = 11;
    for(int i = 0; i < n; i++) {
        if(note[i] < nota_min) nota_min = note[i];
    }
    return nota_min;
}

int Elev::notaMaxima() const {
    if(n == 0) return 0;
    int nota_max = 0;
    for(int i = 0; i < n; i++) {
        if(note[i] > nota_max) nota_max = note[i];
    }
    return nota_max;
}
