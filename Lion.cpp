#include "Lion.h"



Lion::Lion(int maxX, int maxY, int a, int b) : Animal(maxX,maxY,a,b){
  this->nom="L";
  this->setAttaque();
  this->setVivant(1);
}
Lion::Lion(int maxX, int maxY) : Animal(maxX, maxY){
  this->nom="L";
  this->setAttaque();
  this->setVivant(1);
}

//Constructeurs

string Lion::getNom(){
  return this->nom;
}
void Lion::setAttaque() {
  (this-> typeAttaque).setType((rand()%2)+1); //Lion ne fait jamais pierre
} 
void Lion::deplace(int maxX, int maxY){
  int random = rand()%3;
  switch (random){
    case 0:  //+1x +1y 
      if (this->x != maxX && this->y != maxY) //pb sur aucun
      {
        this->x++;
        this->y++;
      }
      else if (this->x == maxX && this->y != maxY) //pb sur x
      {
        this->x=0;
        this->y++;
      }
      else if (this->x != maxX && this->y == maxY) //pb sur y
      {
        this->x++;
        this->y=0;
      }
      else if (this->x == maxX && this->y == maxY) //pb sur les deux
      {
        this->x=0;
        this->y=0;
      }
    break;
    case 1:  //+1x -1y
      if (this->x != maxX && this->y != 0)
      {
        this->x++;
        this->y--;
      }
      else if (this->x == maxX && this->y != 0)
      {
        this->x=0;
        this->y--;
      }
      else if (this->x != maxX && this->y == 0)
      {
        this->x++;
        this->y=maxY;
      }
      else if (this->x == maxX && this->y == 0)
      {
        this->x=0;
        this->y=maxY;
      }
    break;
    case 2: //-1x -1y
      if (this->x != 0 && this->y != 0)
      {
        this->x--;
        this->y--;
      }
      else if (this->x == 0 && this->y != 0)
      {
        this->x=maxX;
        this->y--;
      }
      else if (this->x != 0 && this->y == 0)
      {
        this->x--;
        this->y=maxY;
      }
      else if (this->x == maxX && this->y == 0)
      {
        this->x=maxX;
        this->y=maxY;
      }
    break;
    case 3: //-1x +1y
      if (this->x != maxX && this->y != 0)
      {
        this->x--;
        this->y++;
      }
      else if (this->x == 0 && this->y != 0)
      {
        this->x=maxX;
        this->y--;
      }
      else if (this->x != maxX && this->y == 0)
      {
        this->x--;
        this->y=0;
      }
      else if (this->x == maxX && this->y == 0)
      {
        this->x=maxX;
        this->y=0;
      }
    break; 
    
    default:
      this->x=0;
    break;
}
  }

