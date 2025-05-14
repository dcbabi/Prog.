#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int num, neg=0, as=0;

    cout << "\nEste programa realizará a leitura de 15 valores inteiros e mostrará ao usuário quantos dos valores digitados são negativos. "<< endl;

    for (as=0; as<15; as++){
      cout << "Digite um número inteiro qualquer: ";
      cin >> num;

       if (num<0){
         neg++;
       }
    }
    cout << "Números negativos: " << neg << endl;


    return 0;
}
