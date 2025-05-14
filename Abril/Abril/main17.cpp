#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int num;

    cout << "*****Este programa define se o número digitado pelo usuário é positivo ou negativo!*****"<<endl;
    cout << "Digite um número qualquer: ";
    cin >> num;

    if (num<0)
      cout << "O número é negativo!";

    if (num=0)
      cout << "O número é zero.";

    if (num>0)
      cout << "O número é positivo!";


    return 0;
}
