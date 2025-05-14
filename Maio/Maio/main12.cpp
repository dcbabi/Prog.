#include <iostream>
#include <locale.h>
#define NALUNO 3
#include <cstring>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");

    int aa;
    struct EstrAluno{
      char nome[60], matr[10];
      int anoing;
    }strAluno[NALUNO];

     for(aa=0; aa<NALUNO; aa++){
      cout << "Informe o nome do aluno: ";
      cin.getline(strAluno[aa].nome, 60);
      cout << "Informe a matrícula do aluno: ";
      cin.getline(strAluno[aa].matr, 10);
      cout << "Informe o ano de ingresso do aluno: ";
      cin >> strAluno[aa]. anoing;
      cout << endl;
      fflush(stdin);
     }

    cout << "\nAlunos Cadaastrados com sucesso!\n\n";
    for (aa=0; aa<NALUNO; aa++){
     cout << "Aluno: " << strAluno[aa].nome << endl;
     cout << "Matrícula: " << strAluno[aa].matr << endl;
     cout << "Ano de Ingresso: " << strAluno[aa].anoing << endl;
    }
    return 0;
}