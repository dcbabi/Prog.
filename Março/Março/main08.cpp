#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float fahr, cel;

    cout << "Este programa converte os valores de temperatura Fahrenheit em Celsius." << endl;
    cout << "Digite o valor da temperatura em Fahrenheit: ";
    cin >> fahr;

    cel =(fahr-32)*(5.0/9.0);
    cout << "A temperatura " << fahr << " graus Fahrenheit equivale à " << cel << " graus Celsius." << endl;

    return 0;
}
