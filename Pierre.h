#ifndef cpp_Pierre_h
#define cpp_Pierre_h

#include <iostream>
#include "Animal.h"

using namespace std;

class Pierre : public Animal {

private :
  string nom;
public :

  Pierre(int maxX, int maxY, int a, int b);
  Pierre(int maxX, int maxY);
  //Constructeurs
  
  string getNom();
  void setAttaque();
  void deplace(int maxX, int maxY); //virtuelle pure
  //Méthodes




};

#endif