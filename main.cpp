#include <iostream>
#include "Cuadrado.h"
#include "Cubo.h"
#include <string>

using namespace std;

int main()
{
    float lado=0;
    cout << "- - - - - FORMA GEOMETRICA CUADRADA - - - - - " << "\n";
    cout<<"Ingrese el valor del lado: ";
    cin>>lado;
    cout << "\n";
    Cuadrado cuadrado(lado);
    Cubo cubo(lado);
    cout << "- - - - - - CUADRADO- - - - - -" << "\n";
    cout<<cuadrado.inf();
    cout << "\n - - - - - - CUBO - - - - - - - " << "\n";
    cout<<cubo.inf();
    cout << "\n";
    return 0;
}
