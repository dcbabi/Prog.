#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");

    int cont, num;

    cout << "Este programa imprimirá uma tabuada escolhida pelo usuário!" << endl;
    cout << "\nSelecione um número de 1 a 9: ";
    cin >> num;

    if (num>=1 && num<=9){
       cout << "O número selecionado é válido!\n";
       cout << "\nTabuada do " << num;
       cout << "\n*****************************\n";

     for (cont=0; cont<=10; cont++)
        cout << cont << " x " << num << " = " << cont*num << endl;
        cout << "*****************************\n";

    }
    else {
     cout << "O número digitado é inválido!";
    }

