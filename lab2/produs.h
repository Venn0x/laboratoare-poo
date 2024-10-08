#ifndef PRODUS_H
#define PRODUS_H

class Produs {
private:
    char denumire[50];
    char categorie[50];
    double pret;
    int cantitateStoc;

public:
    Produs(); // fara marametru
    Produs(const char d[], const char c[], double p, int stoc); // Cu parametru
    void set(const char denumire[], const char categorie[], double pret, int cantitateStoc);
    const char* getDenumire();
    const char* getCategorie();
    double getPret();
    int getCantitateStoc();
    void afiseazaInfo();
};

#endif // PRODUS_H
