#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");

    unsigned int idad;
    // insigned serve p que toda variavel inteira aceite APENAS numeros positivos
    // por padrao so o int ja aceita numero posit e negat

    cout << "Informe a sua idade!" << endl;
    cin >> idad;
    cout << "Isso aí! Cê tem " << idad << " anos! " << endl;
    // se informa um numero negativo da uma resposta nada c nada
    return 0;
}
