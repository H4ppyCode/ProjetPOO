#ifndef ARME_H
#define ARME_H

#include <string>

class Arme {
private:
    std::string nom;
    int degats;

public:
    Arme(std::string n, int d);

    ~Arme();

    int getDegats() const;

    void setDegats(int d);

    std::string getNom() const;
};

#endif // ARME_H
