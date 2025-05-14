#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int num = 7, aa;
    char vet[num];

      for (aa=0; aa < num; aa++){
       cout << "Digite uma letra: ";
       cin >> vet[aa];
       }

      for (aa=0; aa<num; aa++){
        cout << "\nA letra armazenada na posição " << aa+1 << " do vetor é: " << vet[aa] << endl;
      }
    cout << "\nO vetor armazena as letras: " << vet << endl; //qnd deixa so o 'vet' assim mostra todos os valores do array
    cout << "A segunda posição do vetor armazena a letra: " << vet[1] << endl;

    return 0;
}
