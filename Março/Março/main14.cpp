#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float val, result;

    cout << "Este programa calcula 12% de qualquer valor digitado." << endl;
    cout << "Digite qualquer valor: ";
    cin >> val;

    result = (val*12)/100;
    cout << "12% de "<< val<< " equivale à: " << result << endl;
    return 0;
}
