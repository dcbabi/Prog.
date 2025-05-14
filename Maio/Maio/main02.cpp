#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int vet[3], aa;

    for (aa=0; aa<5; aa++){
    cout << "\nDigite um número para armazenar na posição " << aa+1 << " do vetor: ";
    cin >> vet[aa];
    }
    return 0;
}
