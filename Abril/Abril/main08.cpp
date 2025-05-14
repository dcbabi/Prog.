#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int cont, num, mai=0, men=0;

    for (cont=0; cont<3; cont++)
{
    cout << "Digite um número: ";
    cin >> num;

    if (cont == 0){
    mai= num;
    men = mai;
    }

    if (num>mai){
        mai=num;
    }
    if (num<men){
        men=num;
    }
}
    cout << "O maior número digitado foi: " << mai << endl;
    cout << "O menor número digitado foi: " << men << endl;

    return 0;
}