#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");

    cout << "----------Hoje é um dia muito feliz!----------\n" << endl;
    cout << "-----------Tenho prova de PES.-----------\n";
    cout << "-------------Vou tirar DEZ.-------------\n";
    return 0;
}
