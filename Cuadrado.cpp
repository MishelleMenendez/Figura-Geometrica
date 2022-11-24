#include "Cuadrado.h"

Cuadrado::Cuadrado()
{
}
Cuadrado::Cuadrado(float lado):lado(lado)
{

}
float Cuadrado::getPeri(float lado){
    return lado+lado+lado+lado;
}
float Cuadrado::getArea(float lado){
    return lado *lado;
}

string Cuadrado::inf(){
    return +"Perimetro: "+ to_string(this->getPeri(lado))+"\n"+
            +"Area: "+to_string(this->getArea(lado))+"\n";
}

float Cuadrado::set(){
    return this->lado;
}


