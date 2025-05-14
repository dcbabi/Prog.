#include <iostream>
#include <locale.h>
#include <cctype>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");

    char sex;
    float alt, res;


    cout << "*****Este programa calculará o seu peso ideal!*****" << endl;
    cout << "Informe seu sexo: 'F' para feminino e 'M' para masculino."<<endl;
    cin >> sex;

    cout << "\nInforme agora sua altura, em metros: ";
    cin >> alt;

    sex =toupper(sex);

    switch (sex){
      case 'F':
        res=(72.7*alt)-58;
        cout << "\nVocê é do sexo feminino e mede "<<alt<< "m de altura!"<<endl;
        cout << "O seu peso ideal é: "<<res<< "!"<<endl;
       break;

      case 'M':
        res=(62.1*alt)-44.7;
        cout <<"\nVocê é do sexo masculino e mede "<<alt<<"m de altura!"<<endl;
        cout << "O seu peso ideal é: "<<res<<"!"<<endl;
       break;

       default:
         cout << "O digito inserido não é válido.";
    }

    return 0;
}
