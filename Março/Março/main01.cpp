#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int num1,num2, num3, numPreliminar, numFinal;
    cout << "Este programa realiza a soma de tr�s n�meros inteiros." << endl;
    cout << "Digite um número inteiro." << endl;
    cin >> num1;
    cout << "Digite um número inteiro" << endl;
    cin >> num2;
    numPreliminar = num1 + num2;
    cout << "Digite um número inteiro" << endl;
    cin >> num3;
    numFinal = numPreliminar + num3;
    cout << "O valor total da soma ?:" << numFinal;


    return 0;
}