#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    float n1, m1;

    cout << "Digite um número inteiro qualquer: " << endl;
    cin >> n1;
    cout<< "Digite um número inteiro qualquer maior que o anterior: " <<endl;
    cin>> m1;

    while (n1<=m1)
      {
      cout<< n1<<" ";
      n1++;
      }

 cout<< "\nFIM.";
    return 0;
}
