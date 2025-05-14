#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

//SETPRECISION
// o setprecision serve para determinar a precisao padrao de numeros que serao considerados
// apos a VIRGULA/PONTO de um valor
// reduz as casas decimais a uma quantidade especifica e faz APROXIMAÇÃO QUANDO PSSIVEL
// ESTRUTURA: cout << fixed << setprecision (valor)

int main()
{
    setlocale (LC_ALL, "portuguese");
    int idad=18;
    long int cpf= 345623355;
    // o int sozinho temu um limite de oito caracteres, ai vc coloca o long p dobrar esse valor
    float sal=1525.70;
    double pi = 3.14157894839;
    char sexo='F';
    char nome[90]="linguagem c";

    cout << "Testes de setprecision com as variáveis: \n" << endl;

    cout << "idade: " << idad <<endl;
    cout << "cpf: " << idad <<endl;
    cout << fixed << setprecision (3) << endl;
    cout << "salário: " << sal << endl;
    cout << "pi: " << pi << endl;
    cout << "sexo: " << sexo << endl;
    cout << "nome: " << nome <<endl;

    return 0;
}
