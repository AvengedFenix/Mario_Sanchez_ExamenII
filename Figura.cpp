#include "Figura.h"

Figura::Figura(){

}

Figura::Figura(int x,int y, string nombre){
  this->x = x;
  this->y =y;
  this->nombre = nombre;
}

Figura::getArea();

Figura::toString();

Figura::~Figura(){

}
