#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int nums, ii, jj;
    int mtz[nums][nums];

    cout << "Digite qual será o tamanho da matriz quadrada: ";
    cin >> nums;

    for (ii=0; ii<nums; ii++){
      for (jj=0; jj<nums; jj++){
                cout << "\nDigite o valor para preencher a matriz: ";
                cin >> mtz[ii][jj];
    }
    cout << endl;
    }

    for (ii=0; ii<nums; ii++){
      for (jj=0; jj<nums; jj++){

        if (ii!=jj){
            cout << mtz[ii][jj] << "   ";
        }
      }
    }
    return 0;
}
