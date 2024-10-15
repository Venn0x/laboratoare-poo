#include <iostream>
#include <cstring>
#include "Mesaj.h"

Mesaj::Mesaj() : text(nullptr) {
    std::cout << "Constructor implicit apelat." << std::endl;
}

Mesaj::Mesaj(const char* msg) {
    std::cout << "Constructor cu parametru apelat." << std::endl;
    text = new char[strlen(msg) + 1];
    strcpy(text, msg);
}

Mesaj::Mesaj(const Mesaj& other) {
    std::cout << "Constructor de copiere apelat." << std::endl;
    text = new char[strlen(other.text) + 1];
    strcpy(text, other.text);
}

Mesaj::~Mesaj() {
    std::cout << "Destructor apelat." << std::endl;
    delete[] text;
}

Mesaj& Mesaj::operator=(const Mesaj& other) {
    std::cout << "Operatorul de atribuire apelat." << std::endl;
    if (this != &other) {
        delete[] text; // Eliberam vechea memorie
        //copiem datele in noul obiect
        text = new char[strlen(other.text) + 1];
        strcpy(text, other.text);
    }
    return *this;
}

void Mesaj::afisare() const {
    if (text) {
        std::cout << "Mesaj: " << text << std::endl;
    } else {
        std::cout << "Mesaj: (niciun text)" << std::endl;
    }
}

void Mesaj::setText(const char* newText) {
    delete[] text; // Eliberam vechea memorie
    text = new char[strlen(newText) + 1];
    strcpy(text, newText);
}
