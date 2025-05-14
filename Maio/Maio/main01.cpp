#include <iostream>
#include <cctype>
#include <locale.h>
#include <iomanip>
#include <cstring>
#define DIM 5

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");

    int vet[DIM] = (10, 15, 20, 25, 30);
    int vets[] = (10, 20, 30, 40, 50, 60, -1);
    int aa;

    cout << "Vetor com tamanho pré-definido com define\n";
       for (aa=0; aa<DIM; aa++){
        cout << "Vetor na posição " << aa+1 << vet[aa] << endl;
       }

    cout << "\n\nVetor terminado por -1 \n";
    for (aa=0; vets[aa]; aa++){
        cout << "Vetor na posição " << aa+1 << " = " << vets [aa] <<endl;
    }

    return 0;
}
