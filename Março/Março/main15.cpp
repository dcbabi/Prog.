#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float salb, ir, salq;

    cout << "Este programa fará um levantamento acerca de seu salário bruto, impostos federais e seu salário líquido." << endl;
    cout << "Digite o valor de seu salário bruto, sem quaisquer descontos nos valores: ";
    cin >> salb;

    ir = (salb*7)/100;
    salq = salb - ir;
    cout << "Você terá de pagar impostos no valor de " << ir <<" R$" << endl;
    cout << "Após essa redução, seu salário líquido total corresponderá à: "<< salq<< " R$";
    return 0;
}
