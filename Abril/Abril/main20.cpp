#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int num;

    cout << "*****Este programa irá defiir se o número digitado pelo usuário é par ou ímpar!*****\n";
    cout << "Digite um número inteiro: " << endl;
    cin >> num;

    if (num%2==0)
        cout << "\nO número digitado é par!" << endl;
    else
       cout << "\nO número digitado é ímpar" << endl;

    return 0;
}
