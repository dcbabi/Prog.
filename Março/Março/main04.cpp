#include <iostream>
#include <locale>

using namespace std;

int main()
{   setlocale (LC_ALL, "Portuguese");
    bool num1, num2;
    cout << "Operadores Lógicos." << endl;
    cout << "Digite dois números distintos:" << endl;
    cin >> num1 >> num2;
    cout << "A negação do primeiro número equivale à:" << !num1 << endl;
    cout << "A negação do segundo número equivale à:" << !num2 << endl;
    cout << "A operação AND entre o primeiro e o segundo número equivale à:" << (num1 && num2) << endl;
    cout << "A operação OR entre o primeiro e o segundo número equivale à:" << (num1 || num2) << endl;

    return 0;
}
