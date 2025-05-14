#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int nums, conts = 1;

    do
    {
        cout << "Digite um número qualquer: ";
        cin >> nums;

    if (nums!=0)
    conts=conts+1;
    }
    while (nums !=0);
        cout << "Fim."<< endl;

    cout << "Foram digitados "<< conts<< " números.";
    return 0;
}
