#include "Arme.h"

Arme::Arme(std::string n, int d) : nom(n), degats(d) {}

Arme::~Arme() {}

int Arme::getDegats() const {
    return degats;
}

void Arme::setDegats(int d) {
    degats = d;
}

std::string Arme::getNom() const {
    return nom;
}
