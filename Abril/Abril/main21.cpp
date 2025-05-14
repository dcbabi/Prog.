#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    char mat[20];
    float n1, n2, n3, meds;

    cout << "*****Este programa calculará a média de aproveitamento do aluno!*****\n" << endl;
    cout << "Digite seu número de matrícula: ";
    cin >> mat;

    cout << "\nDigite sua primeira nota: ";
    cin >> n1;
    cout << "Digite sua segunda nota: ";
    cin >> n2;
    cout << "Digite sua terceira nota: ";
    cin >> n3;

    meds=(n1+n2*2+n3*3)/6;

    if (meds>=9.0){
        cout << "\nMatrícula: " << mat << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << setprecision(2);
        cout << "Média de Aproveitamento Final: " << meds << endl;
        cout << "Conceito: A";
        cout << "\nAPROVADO!";
        }

     if (meds<9.0 && meds>=7.5){
        cout << "\nMatrícula: " << mat << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << setprecision(2);
        cout << "Média de Aproveitamento Final: " << meds << endl;
        cout << "Conceito: B";
        cout << "\nAPROVADO!";
        }

    if (meds<7.5 && meds>=6.0){
        cout << "\nMatrícula: " << mat << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << setprecision(2);
        cout << "Média de Aproveitamento Final: " << meds << endl;
        cout << "Conceito: C";
        cout << "\nAPROVADO!";
        }

    if (meds<6.0 && meds>=4.0){
        cout << "\nMatrícula: " << mat << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << setprecision(2);
        cout << "Média de Aproveitamento Final: " << meds << endl;
        cout << "Conceito: D";
        cout << "\nREPROVADO!";
        }

    if (meds<4.0){
        cout << "\nMatrícula: " << mat << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << setprecision(2);
        cout << "Média de Aproveitamento Final: " << meds << endl;
        cout << "Conceito: E";
        cout << "\nREPROVADO!";
        }

    return 0;
}
