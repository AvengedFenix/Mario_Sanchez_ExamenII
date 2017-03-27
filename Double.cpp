#include "Double.h"

Double::Double(){

}

Double::Double(Double* d){

}

Double Double::operator+(Double* d, Double* c){
  return d+c;
}

Double Double::operator-(Double* d, Double* c){
  return d-c;
}

Double::~Double(){
  
}
