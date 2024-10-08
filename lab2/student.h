
class Student
{
private:
    char nume[50];
    char prenume[50];
    int varsta;
    double medie;
public:
    // Constructori
    Student(); // fara param
    Student(const char n[], const char p[], int v, double m); // Cu parametru


    // Metoda de set (modificare toți parametrii)
    void set(const char n[], const char p[], int v, double m);

    //metode de get

    const char* getNume();
    const char* getPrenume();
    int getVarsta();
    double getMedie();

    //afisarea
    void afiseazaInfo();
};
