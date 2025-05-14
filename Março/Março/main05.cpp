#include <iostream>
#include <locale>

using namespace std;

int main()

{
    setlocale (LC_ALL, "Portuguese");
    bool res1, res2, res3, res4, res5;
    int num1, num2, num3;

    cout << "Operadores Matemáticos." << endl;
    cout << "Digite três números." << endl;
    cin >> num1 >> num2 >> num3;
    res1 = num1 > num2;
    cout << "O resultado da operação 'o número um é maior que o número dois' equivale à:" << res1 << endl;
    res2 = num2 == num3;
    cout<< "O resultado da operação 'o número dois é igual ao número três' equivale à:" << res2 << endl;
    res3 = num3 != num1;
    cout<< "O resultado da operação 'o número três é diferente do número um' equivale à:" << res3 << endl;
    res4 = num2 >= num3;
    cout << "O resultado da opeação 'o número dois é maior ou igual ao número três' equivale à:" << res4 << endl;
    res5 = num1 <= num2;
    cout<< "O resultado da operação 'o número um é menor ou igual ao número dois' equivale à:" << res5 << endl;

    return 0;
}
