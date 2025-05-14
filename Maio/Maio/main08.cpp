#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int mtz[2][3];
    int ii, jj;

    for (ii=0; ii<2; ii++){
     for (jj=0; jj<3; jj++){

       cout << "Digite o valor para a matriz [" << ii+1 << ", " << jj+1 << "]: ";
       cin >> mtz[ii][jj];
     }
    }

     for (ii=0; ii<2; ii++){
        for (jj=0; jj<3; jj++){
         cout << mtz[ii][jj] << "   ";
        }
     cout << endl;
     }

    return 0;
}
