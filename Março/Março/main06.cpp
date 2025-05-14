#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    char nome_[90];
    float km_, tempo_, vel_, hor;

    cout << "Este programa irá calcular sua velocidade média desenvolvida em um trajeto de bicicleta. " << endl;
    cout << "Digite seu nome: ";
    cin >> nome_;
    cout << "Digite a distância percorrida em quilômetros: ";
    cin >> km_;
    cout << "Digite o tempo gasto, em minutos, para percorrer essa distância: ";
    cin >> tempo_;

    cout << "Olá, " << nome_ << " !" << endl;
    cout << "Você percorreu uma distância de " << km_ <<"km" << " em um intervalo de " << tempo_ << " minutos !" << endl;
    vel_ = km_/tempo_;
    cout << "Sua velocidade média final equivale à " << vel_ << "Km/min !" << endl;

    return 0;
}
