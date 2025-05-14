#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float ld, ar1, ar2;

    cout << "Este programa calcula a área de um quadrado e mostra o dobro desse valor. " << endl;
    cout << "Digite o valor do lado do quadrado: ";
    cin >> ld;

    ar1 = ld*ld;
    ar2 = ar1*2;

    cout << "A área do quadrado equivale à: " << ar1 << endl;
    cout << "O dobro dessa mesma área equivale à: " << ar2 << endl;
    return 0;
}
