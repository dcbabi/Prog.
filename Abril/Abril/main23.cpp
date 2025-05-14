#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int num, dd=0
    float meds=0;

    for (dd=0; dd<20; dd++)
{
      cout << "Digite um número inteiro qualquer: ";
      cin >> num;
      meds +=num;
}
     meds = meds/20;
     cout << "Média: " << meds;

    return 0;
}
