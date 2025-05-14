#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float val1, val2, area, lata1;
    int lata2, lt, valor1;

    cout << "Este programa calculará a àrea a ser pintada, a quantidade de latas necessária para a pintura e o valor total. " << endl;
    cout << "Primeiro digite, em metros, a altura da parede: ";
    cin >> val1;
    cout << "Agora digite, em metros, o comprimento da parede: ";
    cin >> val2;

    area = val1*val2;
    cout << "A área total a ser pintada equivale à " << area << "m²."<< endl;

    lata1 = area/54;
    cout << "Cada lata de tinta possui um volume de 18 litros, sendo capaz de cobrir até 54m²/lata."<< endl;
    cout << "Para cobrir uma área de " <<area<<"m², serão necessários "<< lata1<< " latas de tinta." << endl;

    valor1 = lata1*80;
    cout << "Cada lata de tinta custa 80,00R$" << endl;
    cout << "O valor total a ser gasto com " << lata1 << " latas de tinta corresponde à: " <<valor1 <<",00R$";

    return 0;
}
