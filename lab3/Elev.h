class Elev
{
    char* nume;
    char* scoala;
    int n;
    int* note;
public:
    Elev();
    Elev(const char* nume, const char* scoala, int* note, int n);
    Elev(const Elev&);
    Elev& operator=(const Elev&);
    ~Elev();
    const char* getNume() const;
    const char* getScoala() const;
    int getNumarNote() const;
    int* getNote() const;
    void setNume(const char* numeNou);
    void setScoala(const char* scoalaNou);
    void setNote(int* nodeNou, int nNou);
    void afisare() const; //afiseaza toate atributele clasei
    double calculareMedie() const; //returneaza media vectorului note
    int notaMinima() const; //nota minima din vectorul note
    int notaMaxima() const; //nota maxima din vectorul note
};
