#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    char choice;
    int cont, num;

    cout << "Este programa imprime tabuadas!\n" << endl;

    do{
      cout << "Você deseja imprimir uma tabuada? " << endl;
      cout << "Digite 'S' para SIM / Digite 'N' para NÃO " << endl;
      cin >> choice;
choice= toupper(choice);

      switch (choice){

        case 'S':
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
            else{
                cout << "O número digitado é inválido!";
            }
        break;

        case 'N':
            cout << "O programa foi encerrado.";
        break;
      }
    }
      while (choice!='N');

    return 0;
}
