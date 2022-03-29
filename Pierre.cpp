#include "Pierre.h"



Pierre::Pierre(int maxX, int maxY, int a, int b) : Animal(maxX,maxY,a,b){
  this->nom="P";
  (this-> typeAttaque).setType(0);
  this->setVivant(1);
}
Pierre::Pierre(int maxX, int maxY) : Animal(maxX, maxY){
  this->nom="P";
  (this-> typeAttaque).setType(0);
  this->setVivant(1);
}

//Constructeurs

string Pierre::getNom(){
  return this->nom;
}
void Pierre::setAttaque() {
  (this-> typeAttaque).setType(0); // pierre fait toujours pierre
} 
void Pierre::deplace(int maxX, int maxY){
  //Les pierres ne bougent pas
}

