#include <iostream>
#include <locale>

using namespace std;

int main()
{   setlocale (LC_ALL, "Portuguese");

     float num1, num2, num3, soma, subtracao, divisao, multiplicacao;
     int num4, num5, resto;
     cout << "Este programa executará contas matemáticas simples.";

     cout << "Digite o primeiro número. ";
     cin >> num1;
     cout << "Digite o segundo número. ";
     cin >> num2;
     cout << "Digite o terceiro número. ";
     cin >> num3;
     cout << "Digite o quarto número. ";
     cin >> num4;
     cout << "Digite o quinto número. ";
     cin >> num5;
     soma = num1 + num3;
     cout << "A soma do número um ao três equivale ?:" << soma << endl;
     subtracao = num2 - num3;
     cout << "A subtração do número três pelo número dois equivale ?:" << subtracao << endl;
     multiplicacao = num4 * num1;
     cout << "A multiplicação do número quatro pelo número um equivale ?:" << multiplicacao << endl;
     divisao = num5 / num2;
     cout << "A divisão do número cinco pelo número dois equivale ?:" << divisao << endl;
     multiplicacao = num3 * num5;
     cout << "A multiplicação do número três pelo número cinco equivale ?:" << multiplicacao << endl;
     resto = num4 / num1;
     cout << "O resto da divisão do número quatro com o número um equivale ?:" << resto << endl;

    return 0;
}
