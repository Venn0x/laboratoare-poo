#include "student.h"
#include <cstring>
#include <iostream>

Student::Student() {
    this->set("No", "Name", 0, 0);
}

Student::Student(const char n[], const char p[], int v, double m){
    this->set(n, p, v, m);
}

//seteaza datele studentului
void Student::set(const char n[], const char p[], int v, double m){
    strcpy(this->nume, n);
    strcpy(this->prenume, p);
    this->varsta = v;
    this->medie = m;
}

//get informatii despre student

const char* Student::getNume() {
    return nume;
}

const char* Student::getPrenume() {
    return prenume;
}

int Student::getVarsta() {
    return varsta;
}

double Student::getMedie() {
    return medie;
}


//afiseaza info

void Student::afiseazaInfo() {
    std::cout << "Nume si prenume: " << nume << " " << prenume << std::endl
              << "Varsta: " << varsta << std::endl
              << "Media: " << medie << std::endl;
}
