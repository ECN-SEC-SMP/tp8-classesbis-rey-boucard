#include <iostream> 
#include "stdlib.h"
using namespace std;

#include "Attaque.h"

Attaque::Attaque(){
  this->type=rand()%3;
}

Attaque::Attaque(int a){
  this->type=a;
}

int Attaque::getAttaque() const{
  return this->type;
}

bool Attaque::resoudreAttaque(Attaque &a) const{
  
  if(type==0 && a.type==0){
    cout << "test1" << endl;
    return rand()%2;
  }
  else if(type==0 && a.type==1){
    return false;
  }
  else if(type==0 && a.type==2){
    return true;
  }
  if(type==1 && a.type==0){
    return true;
  }
  else if(type==1 && a.type==1){
    return rand()%2;
  }
  else if(type==1 && a.type==2){
    return false;
  }
  if(type==2 && a.type==0){
    return false;
  }
  else if(type==2 && a.type==1){
    return true;
  }
  else if(type==2 && a.type==2){
    return rand()%2;
  }
  return 0;
} 

void Attaque::setType(int a){
  type = a;
}


string Attaque::getNomAttaque() const{
  switch (this->type){
    case 0: return "pierre";
            break;
    case 1: return "feuille";
            break;
    case 2: return "ciseaux";
            break;
    default:return "pierre";
            break;
  }
}