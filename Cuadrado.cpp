#include "Cuadrado.h"

Cuadrado::Cuadrado(){

}

Cuadrado::Cuadrado(int x,int y, string nombre) : Figura(x,y,string){
  this->x =x;
  this->y =y;
  this->area = x*y;
  this->nombre = nombre;
}

string Cuadrado::toString(){
  return area;
}

double Cuadrado::getArea(){
  return area;
}

Cuadrado::~Cuadrado(){
  
}
