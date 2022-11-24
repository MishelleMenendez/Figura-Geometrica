#ifndef CUADRADO_H
#define CUADRADO_H
#include <string>
using namespace std;

class Cuadrado
{
private:
    float lado;
public:
    Cuadrado();
    float set();
    Cuadrado(float lado);
    float getPeri(float);
    float getArea(float);
    string inf();
};


#endif // CUADRADO_H
