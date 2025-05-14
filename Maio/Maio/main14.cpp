#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cstring>

using namespace std;

    int acMaior (int a, int b, int c){
     int maior;
     maior = a;

     if (b>maior){
        maior = b;
     }

     if (c>maior){
        maior = c;
     }
  return maior;
}
 int main (){

    setlocale (LC_ALL, "portuguese");
    int pri, seg, terc, x, y, z, m1, m2;

    cout << "Digite o primeiro conjunto de três números inteiros: " << endl;
    cin >> pri >> seg >> terc;

    m1=acMaior(pri, seg, terc);

    cout << endl;

    cout << "Digite o segundo conjunto de três números inteiros: " << endl;
    cin >> x >> y >> z;

    m2=acMaior (x, y, z);

    cout << endl;

    cout << endl << m1 << " + " << m2
         << " = " << m1+m2 << endl;

    return 0;
}
