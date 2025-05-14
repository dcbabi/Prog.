#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float rai, area;

    cout << "Este programa calculará a área de um círculo. " << endl;
    cout << "O Programa utiliza a aproximação ( pi = 3,14) " << endl;
    cout << "Digite o valor do raio, em cm: ";
    cin >> rai;

    area = (rai*rai)*3.14;
    cout << "A área do círculo corresponde à " << area << " cm ";
    return 0;
}
