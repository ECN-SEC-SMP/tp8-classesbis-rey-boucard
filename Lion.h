#ifndef cpp_Lion_h
#define cpp_Lion_h

#include <iostream>
#include "Animal.h"

using namespace std;

class Lion : public Animal {

private :
  string nom;
public :

  Lion(int maxX, int maxY, int a, int b);
  Lion(int maxX, int maxY);
  //Constructeurs
  
  string getNom();
  void setAttaque();
  void deplace(int maxX, int maxY); //virtuelle pure
  //Méthodes




};

#endif