#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    char nome_[90];
    float nota1, nota2, nota3, media_;

    cout << "Este programa irá calcular sua média final." << endl;
    cout << "Digite seu nome: ";
    cin >> nome_;
    cout << "Digite sua primeira nota: ";
    cin >> nota1;
    cout << "Digite sua segunda nota: ";
    cin >> nota2;
    cout << "Digite sua terceira nota: ";
    cin >> nota3;

    media_ = (nota1+nota2+nota3)/3;
    cout<< "A média final do aluno " << nome_ << " equivale à:" << media_;

    return 0;
}
