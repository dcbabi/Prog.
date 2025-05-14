#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float num;

    cout << "Digite um número qualquer" << endl;
    cin >> num;
    cout << "O número informado foi: " << num << endl;
    return 0;
}
