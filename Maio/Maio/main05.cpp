#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int prod, aa;
    float vals[prod], tots=0.0;

     cout << "*********************Este programa calculará o valor total de uma compra*****************\n";
     cout << "Informe a quantidade de produtos: ";
     cin >> prod;

     for (aa=0; aa<prod; aa++){
       cout << "Informe o valor do produto " << aa+1 << " : ";
       cin >> vals[aa];

       tots+=vals[aa];
     }

     cout << "O valor total dos produtos informados equivale à: " << tots;

    return 0;
}
