#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    char nom[50];
    int irm, idad;


    cout << setw(30) << "Bom dia. . ." << endl;
    cout << setw (15) << "\nQual é o seu nome? ";
    cin >> nom;
    cout << setw (15) << "\nQuantos irmão(s) você possui? ";
    cin >> irm;
    cout << setw(15) << "\nQual é a sua idade? ";
    cin >> idad;

    cout << "Então, você se chama " << nom << ", tem " << irm << " irmão(s) e nasceu em " << 2025-idad << " ?\n";

    return 0;
}
