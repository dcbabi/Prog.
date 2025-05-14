#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float num;

    cout << "Digite qualquer número: " << endl;
    cin >> num;

    if (num>0)
    {
        cout << "O número digitado é positivo.";
    }
    else
    {
        cout << "O número digitado é negativo.";
    }
    return 0;
}
