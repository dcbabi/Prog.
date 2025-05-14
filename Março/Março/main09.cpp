#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float met, cent, conv;

    cout << "Este programa realiza a conversão de metros(m) para centímetros(cm) de uma distãncia percorrida." << endl;
    cout << "Digite o valor em metros: ";
    cin >> met;

    conv = met*100;
    cout << met << " metros equivalem à " << conv << " centímetros. ";

    return 0;
}
