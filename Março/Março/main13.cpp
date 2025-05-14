#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float result;
    result = (2112*12)/100;
    cout << "12% de 2112 equivale à: " << result << endl;
    return 0;
}
