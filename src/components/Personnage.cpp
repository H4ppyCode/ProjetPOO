#include "Personnage.h"
#include "Arme.h"
#include <iostream>

Personnage::Personnage(std::string n, int pdv) : nom(n), pointsDeVie(pdv), arme(nullptr) {}

Personnage::~Personnage() {
    delete arme;
}

void Personnage::equiper(Arme* a) {
    arme = a;
}

void Personnage::attaquer(Personnage& cible) {
    if (arme != nullptr) {
        int degats = arme->getDegats();
        std::string nomArme = arme->getNom();
        std::cout << nom << " attaque " << cible.nom << " avec " << nomArme << " et lui inflige " << degats << " points de dégâts." << std::endl;
        cible.pointsDeVie -= degats;
    }
}
