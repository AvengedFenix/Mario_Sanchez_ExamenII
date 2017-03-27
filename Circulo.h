#pragma once
#include "Figura.h"


class Circulo : public Figura{
private:


public:
  Circulo();

  Circulo(int,int,string);
  virtual double getArea();
  virtual string toString();
  virtual ~Circulo ();
};
