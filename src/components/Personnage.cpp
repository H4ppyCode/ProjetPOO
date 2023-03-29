#include "Personnage.h"
#include "Arme.h"

Personnage::Personnage(std::string n, int pdv) : nom(n), pointsDeVie(pdv), arme(nullptr) {}

Personnage::~Personnage() {
    delete arme;
}

void Personnage::equiper(Arme* a) {
    arme = a;
}

void Personnage::attaquer(Personnage& cible) {
    if (arme != nullptr) {
        cible.subirDegats(arme->getDegats());
    }
}

void Personnage::subirDegats(int degats) {
    pointsDeVie -= degats;
}

Personnage::Personnage(const Personnage& p) : nom(p.nom), pointsDeVie(p.pointsDeVie), arme(nullptr) {
    if (p.arme != nullptr) {
        arme = new Arme(p.arme->getNom(), p.arme->getDegats());
    }
}

Personnage& Personnage::operator=(const Personnage& p) {
    nom = p.nom;
    pointsDeVie = p.pointsDeVie;

    delete arme;
    arme = nullptr;
    if (p.arme != nullptr) {
        arme = new Arme(p.arme->getNom(), p.arme->getDegats());
    }

    return *this;
}
