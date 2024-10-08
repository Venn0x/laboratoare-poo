#include "produs.h"
#include "carte.h"
#include "student.h"
#include <iostream>

int main() {
    // Crearea unui obiect folosind constructorul cu parametru
    Produs produs1("Laptop", "Electronics", 2999.99, 10);

    // Afisarea informațiilor pentru produsul 1
    std::cout << "Informatii despre produsul 1:\n";
    produs1.afiseazaInfo();
    std::cout << std::endl;

    // Crearea unui obiect folosind constructorul fara parametru
    Produs produs2;

    // Setarea valorilor pentru produsul 2
    produs2.set("Telefon", "Electronics", 1499.50, 5);

    // Afisarea informatiilor pentru produsul 2
    std::cout << "Informatii despre produsul 2:\n";
    produs2.afiseazaInfo();
    std::cout << std::endl;

    // Testarea metodelor get
    std::cout << "Denumire produs 2: " << produs2.getDenumire() << std::endl;
    std::cout << "Categorie produs 2: " << produs2.getCategorie() << std::endl;
    std::cout << "Pret produs 2: " << produs2.getPret() << " lei" << std::endl;
    std::cout << "Cantitate stoc produs 2: " << produs2.getCantitateStoc() << " bucati" << std::endl;

    std::cout << std::endl;

    //carte

    //constructor cu parametru
    Carte carte1("Baltagul", "Mihail Sadoveanu", 1900, 350);

    //informatii despre carte1
    carte1.afiseazaInfo();
    std::cout << std::endl;

    //constructor fara parametru
    Carte carte2;
    carte2.set("Moara cu noroc", "Ioan Slavici", 1800, 600);


    //informatii despre carte2:
    carte2.afiseazaInfo();
    std::cout << std::endl;

    //testare getter
    std::cout << "Titlu carte 2: " << carte2.getTitlu() << std::endl;
    std::cout << "Autor carte 2: " << carte2.getAutor() << std::endl;
    std::cout << "An carte 2: " << carte2.getAnPublicare() << std::endl;
    std::cout << "Pagini carte 2: " << carte2.getNumarPagini() << std::endl;
    std::cout << std::endl;
    //student

    //constructor cu parametru
    Student student1("Popescu", "Ion", 20, 8.99);

    //informatii despre student
    student1.afiseazaInfo();
    std::cout << std::endl;

    //constructor fara parametru
    Student student2;
    student2.set("Alexandru", "Dobre", 25, 7.56);


    //informatii despre student2:
    student2.afiseazaInfo();
    std::cout << std::endl;

    //testare getter
    std::cout << "Nume student 2: " << student2.getNume() << std::endl;
    std::cout << "Prenume student 2: " << student2.getPrenume() << std::endl;
    std::cout << "Varsta student 2: " << student2.getVarsta() << std::endl;
    std::cout << "Medie student 2: " << student2.getMedie() << std::endl;


    return 0;
}
