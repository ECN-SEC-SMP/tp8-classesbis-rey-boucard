#include "Animal.h"
 // Attaque getAttaque()const


 // bool attaque(Animal &a)
 // virtual void setAttaque() //virtuelle pure
 // virtual void deplace(int maxX, int maxY) //virtuelle pure


Animal::Animal(int maxX, int maxY){
  this ->x = rand()%maxX;
  this -> y = rand()%maxY;
}

Animal::Animal(int maxX, int maxY, int a, int b){
  if (a <= maxX && b <= maxY){
    
    this->x = a;
    this->y = b;
    
  }
  else {
    cout << "erreur" << endl;
  }
}

int Animal::getX() const{
  return this->x;
}
int Animal::getY() const{
  return this->y;
}

bool Animal::getVivant() const{
  return this-> vivant;
} 


void Animal::setVivant(bool v){
  this -> vivant = v;
}

bool Animal::attaque(Animal &a) {
  bool vie = typeAttaque.resoudreAttaque(a.typeAttaque);
  setVivant(vie);
  a.setVivant(!vie);
  cout << "test : " << vie << endl;
  return vie; // a voir
}

Attaque Animal::getAttack() const{
  return this->typeAttaque;
}


// pour avoir un random on fait modulo 4