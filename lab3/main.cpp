#include <iostream>
#include "Mesaj.h"
#include "Elev.h"

Mesaj createMesaj(Mesaj& mesaj) {
    return mesaj; // Apeleaza constructorul de copiere
}

void func();

int main() {
    /*
    Mesaj mesaj1; // Apeleaza constructorul implicit
    Mesaj mesaj2("Salut!"); // Apeleaza constructorul cu parametru
    Mesaj mesaj3 = mesaj2; // Apeleaza constructorul de copiere

    Mesaj mesaj4 = createMesaj(mesaj3); // Apeleaza constructorul de copiere
    */

    Mesaj mesaj1; // Apeleaza constructorul implicit
    Mesaj mesaj2("Salut!"); // Apeleaza constructorul cu parametru
    Mesaj mesaj3 = mesaj2; // Apeleaza constructorul de copiere

    Mesaj mesaj4 = createMesaj(mesaj3); // Apeleaza constructorul de copiere

    mesaj1 = mesaj3; // Apeleaza operatorul de atribuire

    mesaj1.afisare(); // Afiseaza mesajul
    mesaj2.afisare(); // Afiseaza mesajul
    func();
    mesaj1.setText("Buna ziua"); // Modifica textul
    mesaj1.afisare(); // Afiseaza mesajul modificat
    mesaj3.afisare(); // Afiseaza mesajul modificat
    std::cout << "Functii elev\n\n";

    Elev elev1;

    int note[] = {1, 2, 3, 4};
    Elev elev2("Ion Popescu", "Scoala Mihai Eminescu", note, 4);

    elev2.afisare();
    elev1.afisare();


    Elev elev3 = elev2;
    elev3.afisare();

    elev3.setNume("Ion Popescu Jr");

    elev3.setScoala("Liceul Ion Creanga");

    int notenoi[] = {5, 8, 9};
    elev3.setNote(notenoi, 3);
    elev3.afisare();

    std::cout << "Elev 3: Media: " << elev3.calculareMedie()
     << " Nota minima: " << elev3.notaMinima()
     << " Nota maxima: " << elev3.notaMaxima()
     << std::endl;

    return 0;
}

void func() {
    Mesaj a;
}
