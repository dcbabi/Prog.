#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float qilo, multar, excess;

    cout << "Informe o peso, em kg, do total de peixes pescados: ";
    cin >> qilo;

    if (qilo>50)
    {
        excess = qilo-50;
        cout << "A pesca excede o máximo permitido em " <<excess <<"kg."<<endl;
    }
    else
    {
        cout << "A quantia está dentro do máximo permitido."<<endl;
    }
        multar = excess*4;
        cout << "Uma vez excedido o limite de pesca, é necessário pagar uma multa no valor de " <<multar<<" R$"<< endl;

    return 0;
}
