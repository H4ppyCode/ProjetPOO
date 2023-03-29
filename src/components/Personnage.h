#ifndef PERSON_H 
#define PERSON_H 
#include <string> 

class Personnage {
    public : 
        Arme(std::string name, int age); 
        
    private : 
        std::string nom; 
        int degats;
}; 
#endif