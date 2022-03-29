#ifndef cpp_Attaque_h
#define cpp_Attaque_h

#include <iostream>
using namespace std;

class Attaque  {

private :
  int type; // 0:pierre 1:feuille 2:Ciseaux

public :
  Attaque(); //crée une attaque random
  Attaque(int a); //crée une attaque spécifique

  void setType(int a);
  int getAttaque() const;
  bool resoudreAttaque(Attaque &a) const;
  string getNomAttaque()const;

};

#endif