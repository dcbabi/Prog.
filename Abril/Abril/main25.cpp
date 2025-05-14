#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
   setlocale (LC_ALL, "Portuguese");
   int fis, conts=0;
   float sal, mai, medsfis=0, medssal=0;

   cout << "Este programa realizará alguns cálculos acerca de 15 habitantes do município." << endl;

   for (conts=0; conts<15; conts++)
   {
   cout << "Informe seu salário: ";
   cin >> sal;
   cout << "Informe quantos filhos possui: ";
   cin >> fis;

   (medsfis+=fis);
   (medssal+=sal);

      if (sal>mai){
        mai=sal;
      }
}
   cout << "Média salarial da população: " << medssal/15 << endl;
   cout << "Média da quantidade de filhos: " << medsfis/15 << endl;
   cout << "O maior salário informado equivale à: " << mai <<endl;

    return 0;
}
