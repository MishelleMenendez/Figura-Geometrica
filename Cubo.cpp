#include "Cubo.h"

Cubo::Cubo(float lado):Cuadrado (lado)
{

}
float Cubo::getAreaCubo(float lado){
    return 6*lado*lado;
}
float Cubo::getVolumen(float lado){
    return lado*lado*lado;
}

string Cubo::inf(){
    return "Area del cubo: "+to_string(this->getAreaCubo(this->set()))+"\n"
           "Volumen del cubo: "+to_string(this->getVolumen(this->set()))+"\n";
}

