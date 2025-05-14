#include <iostream>
#include <locale>
#include <cctype>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int num1, num2;
    char ops;

    cout << "Este programa realizará uma das quatro operações matemáticas abaixo: "<< endl;
    cout << "Selecione a operação que deseja realizar pressionando o sinal indicado entre aspas: "<<endl;
    cout << "'+' para SOMA"<< endl;
    cout<< "'-' para SUBTRAÇÃO"<< endl;
    cout<<"'*' para MULTIPLICAÇÃO"<<endl;
    cout<<"'/' para DIVISÃO"<< endl;
    cout<<"'S' para SAIR"<< endl;
    cin >> ops;

    switch (ops)
    {
       case '+':
        cout << "Digite o primeiro número: ";
        cin>> num1;

        cout << "Digite o segundo número: ";
        cin>>num2;

        cout<< "A soma dos números corresponde à: "<<num1+num2;
         break;

       case '-':
        cout<< "Digite o primeiro número :";
        cin>> num1;

        cout <<"Digite o segundo número: ";
        cin>> num2;

        cout<< "A subtração dos números corresponde à: "<<num1-num2;
        break;

        case '*':
        cout<< "Digite o primeiro número :";
        cin>> num1;

        cout <<"Digite o segundo número: ";
        cin>> num2;

        cout<< "A multiplicação dos números corresponde à: "<<num1*num2;
        break;

        case '/':
        cout<< "Digite o primeiro número :";
        cin>> num1;

        cout <<"Digite o segundo número: ";
        cin>> num2;

        cout<< "A divisão dos números corresponde à: "<<num1/num2;
        break;

        case 's':
        cout<< "Fim.";
    default:
    cout<< "\nDígito inválido.";
    }


    return 0;
}