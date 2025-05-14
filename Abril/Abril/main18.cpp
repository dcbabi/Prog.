#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int cod, cod2, quant, quant2;
    float val, val2, tots;

    cout << "****Este programa calculará o valor a ser pago pelo lanche ou bebida selecionada.*****\n" << endl;
    cout << "Selecione um dos códigos abaixo de acordo com o lanche que deseja: " <<endl;
    cout << "'100' - cachorro quente" <<endl;
    cout << "'101' - bauru simples" <<endl;
    cout << "'102' - bauru com ovo" <<endl;
    cout << "'103' - hamburguer" <<endl;
    cout << "'104' - cheeseburguer" <<endl;
    cin >> cod;

    cout << "\nSelecione agora a quantidade: ";
    cin >> quant;

    switch(cod){
       case 100:
           val= (quant*9.20);
       cout << quant << " cachorro(s) quente(s): R$" <<val<< endl;
       break;

       case 101:
           val= (quant*12);
       cout << quant << " bauru(s) simples: R$" <<val<< endl;
       break;

       case 102:
           val= (quant*13);
       cout << quant << " bauru(s) com ovo: R$" <<val<< endl;
       break;

       case 103:
           val= (quant*10);
       cout << quant << " hamburguer(s): R$" <<val<< endl;
       break;

       case 104:
           val= (quant*12);
       cout << quant << " cheeeseburguer(s): R$" <<val<< endl;
       break;

       default:
        cout << "Digito inválido." <<endl;
    }

  cout << "\nSelecione um dos códigos abaixo de acordo com a bebida que deseja: " <<endl;
  cout << "'105' - refri lata" <<endl;
  cout << "'106' - água" <<endl;
  cout << "'107' - sem bebida" <<endl;
  cin >> cod2;

  if (cod2!=107){
  cout << "\nSelecione agora a quantidade: ";
  cin >> quant2;
  }

  switch(cod2){
       case 105:
           val2= (quant2*5);
       cout << quant2 << " refri(s) lata: R$" <<val2<< endl;
       break;

       case 106:
           val2= (quant2*3);
       cout << quant2 << " água(s): R$"<<val2<<endl;
       break;

       case 107:
       cout << "\nNenhuma bebida selecionada."<<endl;
       break;
  }
     tots = (val+val2);
     cout << "\nO valor total a ser pago equivale à:R$ " << tots;
    return 0;
}
