#include "Circulo.h"

Circulo::Circulo(){

}

Circulo::Circulo(int x,int y, string nombre){
  this->x =x;
  this->y =y;
  this->area = x*y;
  this->nombre = nombre;
}

string Circulo::toString(){
  return nombre;
}

double Circulo::getArea(){
  return area;
}

Circulo::~Circulo(){
  
}
