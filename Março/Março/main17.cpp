#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float num1, num2;

    cout << "Este programa determina qual o maior valor entre dois números digitados." << endl;
    cout << "Digite um número qualquer: ";
    cin >> num1;
    cout << "Digite outro número qualquer: ";
    cin >> num2;

    if (num1>num2)
    {
        cout << num1 << " é maior que "<<num2<< endl;
    }
    else
    {
        cout << num2<< " é maior que "<<num1<< endl;
    }
    return 0;
}
