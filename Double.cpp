#include "Double.h"

Double::Double(){

}

Double::Double(double d){
    this->d = d;
}

double Double::operator+(Double* c){
  return d+c->d;
}

double Double::operator-(Double* c){
  return d-c->d;
}

Double::~Double(){

}
