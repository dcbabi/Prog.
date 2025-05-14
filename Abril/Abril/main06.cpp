#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    string prod;
    float prec, desc, add, res;
    int op;

    cout << "Este programa imprimirá o valor a ser pago num produto dependendo da forma de pagamento." << endl;
    cout << "\nInforme o nome do produto selecionado: ";
    getline (cin, prod);
    cout << "\nInforme o valor desse produto: ";
    cin >> prec;

    cout << "Selecione uma das opções no menu abaixo para definir o pagamento: " << endl;
    cout << "1 - PAGAMENTO À VISTA (10% de desconto)" << endl;
    cout << "2 - PAGAMENTO COM 30 DIAS DE PRAZO (sem desconto)" << endl;
    cout << "3 - PAGAMENTO EM 10x NO CARTÃO DE CRÉDITO (sem desconto/sem acréscimo)" << endl;
    cout << "4 - PAGAMENTO EM 10x NO BOLETO (10% de acréscimo)" << endl;
    cin >> op;

    switch (op){
      case 1:
        cout << "\nVocê selecionou a opção PAGAMENTO À VISTA." << endl;
        cout << "Essa forma de pagamento oferece um DESCONTO DE 10% ! " << endl;

        desc = prec*10/100;
        res = prec-desc;
        cout << "\nApós o desconto, você pagará " << res << "R$ pelo produto!" << endl;
       break;

      case 2:
        cout << "\nVocê selecionou a opção PAGAMENTO COM 30 DIAS DE PRAZO." << endl;
        cout << "Essa forma de pagamento não oferece descontos ou acréscimos. " << endl;

        cout << "\nVocê pagará " << prec << "R$ pelo produto!" << endl;
       break;

      case 3:
        cout << "\nVocê selecionou a opção PAGAMENTO EM 10x NO CARTÃO." << endl;
        cout << "Essa forma de pagamento não oeferece descontos ou acréscimos. " << endl;

        cout << "\nVocê pagará " << prec/10 << "R$ em cada parcela!" << endl;
       break;

      case 4:
        cout << "\nVocê selecionou a opção PAGAMENTO EM 10x NO BOLETO." << endl;
        cout << "Essa forma de pagamento acarreta um ACRÉSCIMO DE 10% ! " << endl;

        add = prec*10/100;
        res = (prec+add)
        /10;
        cout << "\nApós o acréscimo, você pagará " << res << "R$ em cada parcela!" << endl;
       break;

      default:
        cout << "Opção informada é inválida.";
    }

    return 0;
}
