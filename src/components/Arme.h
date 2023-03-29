#ifndef ARME_H
#define ARME_H

#include <string>

class Arme
{
private:
    std::string nom;
    int degats;

public:
    Arme(std::string nom, int degats);

    ~Arme();
    std::string getNom() const;
    
    int getDegats() const;

    // void setDegats(int degats);
};

#endif // ARME_H
