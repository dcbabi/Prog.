#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int num, numbs[num], aa, pars, impars;

    cout << "*********Este programa definirá se os números digitados pelo usuário  são pares ou ímpares*******\n" << endl;

    for (aa=0; aa<3; aa++){
       cout << "Digite um número: ";
       cin >> num;

     if (pars+=(num%2==0)){
       cout << "Números pares: " << pars;
     }
     if (impars +=(num%2==1)){
        cout << "Números pares: " << impars;
     }
}
    return 0;
}
