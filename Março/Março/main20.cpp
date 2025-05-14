#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float nota1, nota2, media;

    cout << "Este programa calculará sua média." << endl;
    cout << "Digite o valor de sua primeira nota: ";
    cin >> nota1;
    cout << "Digite o valor de sua segunda nota: ";
    cin >> nota2;

    media = (nota1+nota2)/2;
    cout << "Sua média equivale à: "<<media<< endl;

    if (media>=7.0 && media<=9.9)
    {
        cout << "Média: "<< media<< " - Aprovado.";
    }
    if (media ==10)
    {
        cout << "Média: "<<media<<" - Aprovado com Distinção.";
    }
    if (media<7.0)
    {
        cout << "Média: "<<media<< " - Reprovado.";
    }

    return 0;
}