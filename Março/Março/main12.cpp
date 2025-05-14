#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float rr, hr, sal;

    cout << "Este programa calculará seu salário mensal. " << endl;
    cout << "Digite o quanto você ganha, em reais, por hora: ";
    cin >> rr;
    cout << "Digite quantas horas você trabalhou no mês: ";
    cin >> hr;

    sal = (rr*hr);
    cout << "Seu salário mensal final equivale à: " << sal << "R$"<< endl;
    return 0;
}
