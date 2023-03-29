#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>

class Arme;

class Personnage {
private:
    std::string nom;
    int pointsDeVie;
    Arme* arme;

public:
    Personnage(std::string n, int pdv);

    ~Personnage();

    void equiper(Arme* a);

    void attaquer(Personnage& cible);

    // void subirDegats(int degats);

    Personnage(const Personnage& p);

    Personnage& operator=(const Personnage& p);
};

#endif // PERSONNAGE_H
