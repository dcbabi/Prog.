#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");
    int a=2, b=3, c=5, d=4, e, r;
    float z;

    cout << "Este programa executará algumas contas matemáticas." << endl;

    cout << " e = c * b:      ";
    e = c*b;

    cout << "b = " << b << setw(3) << " c = " << c << setw(3) << " operação: " << e << endl;


    z = c++ % b;
    // primeiro ocorre a DIVISÃO entre c e b, após isso SOMA +1 à variavel c, que PASSA A VALER 6
    // c/b = 1.6
    // c++ = 6
    cout << " z = c++ & b:      ";
    cout << "c = " << c << setw(3) << " b = " << c << setw(3) << " operação: " << z << endl;


    r = -b;
    // tracinho - so deixa o valor negativo mesmo :p
    cout << " r = -b:      ";
    cout << "b = " << b << setw(3) << " operação: " << r << endl;


    d *= a+b;
    // primeiro ocorre a MULTIPLICAÇÃO : d=d*(a+b), multiplica d*a e d*b p so entao somar os dois e obter o valor de d
    // d*a = 8 , d*b = 12 , logo d=12+8=20
    cout << " d *= a+b:      ";
    cout << "b = " << b << setw(3) << " a = " << a << setw(3) << " operação: " << d << endl;

    a += b +=c += 5;
    // faz da direita p esquerda, primeiro soma 5 ao c e a partir do novo valor vai fazendo as outras somas
    // c+= 5 = 10 , b+= c = 14 , a+= b = 16
    cout << " a += b += c += 5:       ";
    cout << "b = " << b << setw(3) << "c = " << c << setw(3) << " operação: " << e << endl;


    return 0;
}
