#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int cs=50;

    while (cs>=10)
    {
    cout << "Contador: " << cs<< endl;
    cs=(cs-1);
    }
    cout<< "Fim.";

    return 0;
}
