#include "Cuadrado.h"

Cuadrado::Cuadrado(){

}

Cuadrado::Cuadrado(int x,int y, string nombre) : Figura(x,y,nombre){
  this->x =x;
  this->y =y;
  this->area = x*y;
  this->nombre = nombre;
}

string Cuadrado::toString(){
  return nombre;
}

double Cuadrado::getArea(){
  return this->area;
}

Cuadrado::~Cuadrado(){

}
