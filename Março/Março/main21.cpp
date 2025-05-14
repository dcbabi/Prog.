#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float num1, num2, num3;

    cout << "Digite um número qualquer: ";
    cin >> num1;
    cout << "Digite um número qualquer: ";
    cin >> num2;
    cout << "Digite um número qualquer: ";
    cin>> num3;

    if (num1> num2 && num3)
    {
        cout << num1 <<" é maior que "<< num2 <<" e " << num3 << endl;
    }
    if (num2 >num1 && num3)
    {
        cout << num2 << " é maior que "<<num1 <<" e "<< num3<< endl;
    }
    if (num3> num1 && num2)
    {
        cout << num3 << " é maior que "<<num2 << " e "<< num1<< endl;
    }

    return 0;
}
