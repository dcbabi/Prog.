#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int its, som=0;

     cout<< "Todos os números pares, em ordem crescente, de 100 a 200:\n";

    its=100;
    while(its<=200)
{
      cout << its <<" - ";
som+=its;

its+=2;
}
        cout << "\nA soma de todos os números pares contidos nesse intervalo equivalem à: " <<som<<endl;

    return 0;
}
