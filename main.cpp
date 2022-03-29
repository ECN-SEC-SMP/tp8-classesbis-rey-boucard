#include <iostream>
#include "time.h"
using namespace std;

#include "Animal.h"
#include "Pierre.h"
#include "Lion.h"

int main() {
  cout << "Hello World\n";
  int maxX;
  int maxY;
  cout << endl << "Nombre de lignes : ";
  cin >> maxX;
  cout << endl << "Nombre de colonnes : ";
  cin >> maxY;
  srand(time(0));
  Pierre P1 (10, 10, 2, 6);
  Lion L2 (10, 10, 10, 10);
  cout << P1.getAttack().getAttaque() << endl;
  cout << L2.getAttack().getAttaque() << endl;
  P1.setAttaque();
  L2.setAttaque();
  cout << P1.getVivant() << endl;
  cout << L2.getVivant() << endl;
  
  P1.attaque(L2);
  
  cout << P1.getVivant() << endl;
  cout << L2.getVivant() << endl;

  cout << L2.getX() << endl;
  cout << L2.getY() << endl;
  L2.deplace(10, 10);
  cout << L2.getX() << endl;
  cout << L2.getY() << endl;
  
  string plateau [10][10]= {
        {"", "L", "", "", "", "", "L", "", "", ""},
        {"", "", "", "", "", "", "P", "", "", ""},
        {"L", "", "", "", "", "", "", "", "", "P"},
        {"", "L", "", "", "", "", "P", "", "", ""},
        {"", "", "", "P", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", "L", "", ""},
        {"P", "", "", "", "", "P", "", "", "", ""},
        {"", "", "", "", "", "", "", "", "", ""},
        {"", "", "L", "", "", "", "", "", "L", ""},
        {"", "L", "", "", "", "", "", "", "", ""}
  };
  
  cout << sizeof(plateau)/sizeof(plateau[0]) << endl;
  cout << sizeof(plateau[0])/sizeof(plateau[0][0]) << endl;
  //affichage(plateau);

  int i;
  int j;
  cout << "|----|----|----|----|----|----|----|----|----|----|" << endl;
  for (i=0; i<sizeof(plateau)/sizeof(plateau[0]); i++)
  {
    cout << "|";
    for (j=0; j<sizeof(plateau[0])/sizeof(plateau[0][0]); j++)
    {
      if (plateau[i][j]==""){
        cout << "    ";
      }
      else
      {
        cout << plateau[i][j] << "   ";
      }
      cout << "|";
    }
    cout << endl;
  cout << "|----|----|----|----|----|----|----|----|----|----|" << endl;
  }

  //return 0;
}


// void init(maxX, maxY){
  
//   Pierre P0 (10, 10, 2, 6);
//   Pierre P1 (10, 10, 2, 6);
//   Pierre P2 (10, 10, 2, 6);
//   Pierre P3 (10, 10, 2, 6);
//   Pierre P4 (10, 10, 2, 6);
//   Pierre P5 (10, 10, 2, 6);
//   Pierre P6 (10, 10, 2, 6);
//   Pierre P7(10, 10, 2, 6);
//   Pierre P8 (10, 10, 2, 6);
  
//   Lion L2 (10, 10, 10, 10);

  
// }