
 class Carte {
 private:
     char titlu[50];
     char autor[50];
     int anPublicare;
     int numarPagini;
 public:

     // Constructori

     Carte(); // Fara parametru
     Carte(const char t[], const char a[], int an, int nrPagini); // Cu parametru


     // Metoda de set (modificare toți parametrii)
     void set(const char t[], const char a[], int an, int nrPagini);

     // Metode de get
     const char* getTitlu();
     const char* getAutor();
     int getAnPublicare();
     int getNumarPagini();

     // Metoda de afișare
     void afiseazaInfo();
 };
