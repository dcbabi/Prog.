#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int num, dd=0, pars=0, numsp=0;
    float meds;

    for (dd=0; dd<20; dd++)
{
      cout << "Digite um número inteiro qualquer: ";
      cin >> num;

      if
      (num%2==0){
      pars +=num;
      numsp++;
      }
}
    meds = pars/numsp;
    cout << "Média dos números pares digitados: " << meds;

    return 0;
}
