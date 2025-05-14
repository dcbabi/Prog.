#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int pass;

    cout << "Informe a senha: " << endl;
    cin >> pass;

    if (pass==1234){
        cout << "ACESSO PERMITIDO.";
    }
    else{
        cout << "ACESSO NEGADO.";
    }
    return 0;
}
