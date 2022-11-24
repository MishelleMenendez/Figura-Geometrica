#ifndef CUBO_H
#define CUBO_H
#include "Cuadrado.h"
#include <iostream>
#include <string>

using namespace std;

class Cubo : public Cuadrado
{
public:
    Cubo();
    Cubo(float lado);
    string inf();
    float getAreaCubo(float);
    float getVolumen(float);
};

#endif // CUBO_H
