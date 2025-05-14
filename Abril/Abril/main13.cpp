#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int cons=10;

    while (cons<=100)
    {
        cout << "Contador: "<< cons<<endl;;
        cons=(cons+1);
    }
    cout<< "Fim.";
    return 0;
}
