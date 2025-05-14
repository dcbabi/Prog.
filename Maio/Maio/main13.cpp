#include <iostream>
#include <locale.h>
#include <cstring>
#define VALORS 3

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int aa;
    struct dadosp{
      char name[90], sign[90], city [90];
      int nasc, numfav, daqanos;
    }DadosPessoais[VALORS];

    cout << "**************************************\n" << endl;
    cout << "Este programa fará algumas perguntas aleatórias para três pessoas !\n";

    for (aa=0; aa<VALORS; aa++){
        cout << "Digite o seu nome: ";
        cin.getline(DadosPessoais[aa]. name, 90);
        cout << "Digite seu ano de nascimento: ";
        cin >> DadosPessoais[aa]. nasc;
        cout << "Digite qual é o seu signo: ";
        cin.getline (DadosPessoais[aa]. sign, 90);
        cout << "Digite o nome da cidade em que você nasceu: ";
        cin.getline (DadosPessoais[aa].city, 90);
        cout << "Digite o seu número favorito: ";
        cin >> DadosPessoais[aa]. numfav;
        cout << "Para finalizar, digite quantos anos você terá daqui 10 anos: ";
        cin >> DadosPessoais[aa]. daqanos;
        fflush(stdin);
    }

    cout << "\n**********************************************" << endl;
    cout << "Bacana! Vamos ver o que temos então !\n" << endl;

      for (aa=0; aa<VALORS; aa++);{
      cout << "Nome: " << DadosPessoais[aa]. name;
      cout << "Ano de nascimento: " << DadosPessoais[aa].nasc;
      cout << "Signo: " << DadosPessoais[aa].sign;
      cout << "Cidade em que nasceu: " << DadosPessoais[aa].city;
      cout << "Número favorito: " << DadosPessoais[aa].numfav;
      cout << "Idade daqui 10 anos: " << DadosPessoais[aa].daqanos;
      cout << endl;
      fflush(stdin);
}

    return 0;
}
