#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float nota1, nota2, nota3, nota4, media;

    cout << "Este programa calculará sua média. " << endl;
    cout << "Digite sua primeira nota: ";
    cin >> nota1;
    cout << "Digite sua segunda nota: ";
    cin >> nota2;
    cout << "Digite sua terceira nota: ";
    cin >> nota3;
    cout << "Digite sua quarta nota: ";
    cin >> nota4;

    media = (nota1+nota2+nota3+nota4)/4;
    cout << "Sua média final equivale à: " << media;

    return 0;
}
