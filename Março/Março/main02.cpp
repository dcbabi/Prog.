#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float salario1, vendas, salario2;
    int comissao;
    cout << "Digite o valor de seu salário fixo." << endl;
    cin >> salario1;
    cout << "Digite o valor de suas vendas." << endl;
    cin >> vendas;
    cout << "Digite o valor de sua comissão." << endl;
    cin >> comissao;
    salario2 = salario1 + (comissao * vendas);
    cout << "Seu salário final equivale ?:" << salario2 << endl;

    return 0;
}