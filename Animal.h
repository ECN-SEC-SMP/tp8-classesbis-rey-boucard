#ifndef cpp_Animal_h
#define cpp_Animal_h

#include <iostream>
#include "Attaque.h"
using namespace std;

class Animal {

protected :
  int x; //abscisse de l'animal
  int y; //ordonnée de l'animal
  bool vivant;
  Attaque typeAttaque;

public :

 Animal(int maxX, int maxY); //maxX, maxY taille maximale du plateau
 Animal(int maxX, int maxY, int a, int b);
//Constructeurs

 int getX() const;
 int getY() const;
 bool getVivant() const;
 Attaque getAttaque()const;
 void setVivant(bool v); //Défini le statut de vie ou de mort
//Getteur et Setteurs

Attaque getAttack() const;
virtual string getNom()=0;
bool attaque(Animal &a);
virtual void setAttaque()=0; //virtuelle pure
virtual void deplace(int maxX, int maxY)=0; //virtuelle pure
//Méthodes

};

#endif