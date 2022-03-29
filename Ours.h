#ifndef cpp_Ours_h
#define cpp_Ours_h

#include <iostream>
#include "Animal.h"

using namespace std;

class Ours : public Animal {

private :
  string nom;
public :

  Ours(int maxX, int maxY, int a, int b);
  Ours(int maxX, int maxY);
  //Constructeurs
  
  string getNom();
  void setAttaque();
  void deplace(int maxX, int maxY); //virtuelle pure
  //Méthodes

};

#endif

