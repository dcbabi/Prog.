#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    float nots[4], meds;
    int aa;

    cout << "************Este programa calculará as notas de um aluno******************\n" << endl;
      for (aa=0; aa<4; aa++){
        cout << "Digite a nota do aluno " << aa+1 << ":";
        cin >> nots[aa];

     meds +=nots[aa];
      }

    cout << "\nA média final do aluno equivale à: " << meds/4 << endl;
    return 0;
}
