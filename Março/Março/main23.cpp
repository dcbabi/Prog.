#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float num1, num2, som;
    cout << "Este programa executará a soma de dois números." << endl;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    som = num1+num2;
    cout << "O resultado da soma dos dois números digitados equivale à: " << som;
    return 0;
}
