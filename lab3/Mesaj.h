#ifndef MESAJ_H
#define MESAJ_H

class Mesaj {
    char* text;
public:
    Mesaj();
    Mesaj(const char*);
    Mesaj(const Mesaj&);
    ~Mesaj();
    Mesaj& operator=(const Mesaj&);
    void afisare() const;
    void setText(const char*);
};



#endif // MESAJ_H
