#include <iostream>
#include <cstring>
using namespace std;

struct Persoana {
    char nume[30];
    double venit;
};

void setValori(Persoana persoane[]);
void afiseazaPersoane(const Persoana persoane[], int marime);
void sorteazaPersoane(Persoana persoane[], int marime);

int main() {
    // 1. Declară un vector de 10 elemente de tip Persoana.
    Persoana persoane[10];

    // 2. Apelează o funcție setValori pentru a seta valorile în acest vector.
    setValori(persoane);

    // 3. Apelează o funcție afiseazaPersoane pentru a afișa lista de persoane.
    cout << "Lista persoanelor:" << endl;
    afiseazaPersoane(persoane, 10);

    // 4. Apelează o funcție sorteazaPersoane pentru a sorta persoanele după venit.
    sorteazaPersoane(persoane, 10);

    // 5. Afișează din nou lista sortată cu funcția afiseazaPersoane.
    cout << "Lista persoanelor sortate dupa venit:" << endl;
    afiseazaPersoane(persoane, 10);

    return 0;
}


void setValori(Persoana persoane[]) {
    // Inițializăm valorile cu date statice
    const char* numeStatice[10] = {
        "Ion Popescu",
        "Maria Ionescu",
        "George Vasilescu",
        "Ana Georgescu",
        "Andrei Radu",
        "Elena Stan",
        "Cristian Dobre",
        "Ioana Marcu",
        "Mihai Petrescu",
        "Sofia Cristea"
    };

    double venituriStatice[10] = {
        2500.50,
        3000.75,
        1500.00,
        4000.00,
        3200.25,
        1800.60,
        2200.10,
        2900.30,
        3700.80,
        2600.40
    };

    // Setăm valorile în vectorul de persoane
    for (int i = 0; i < 10; ++i) {
        strcpy(persoane[i].nume, numeStatice[i]);
        persoane[i].venit = venituriStatice[i];
    }
}


void afiseazaPersoane(const Persoana persoane[], int marime) {
    for (int i = 0; i < marime; ++i) {
        cout << "Nume: " << persoane[i].nume << ", Venit: " << persoane[i].venit << endl;
    }
}

void sorteazaPersoane(Persoana persoane[], int marime) {
    for (int i = 0; i < marime - 1; ++i) {
        for (int j = 0; j < marime - i - 1; ++j) {
            if (persoane[j].venit > persoane[j + 1].venit) {
                // Schimbă persoanele
                Persoana temp = persoane[j];
                persoane[j] = persoane[j + 1];
                persoane[j + 1] = temp;
            }
        }
    }
}
