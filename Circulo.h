#pragma once
#include "Figura.h"


class Ciruclo {
private:


public:
  Ciruclo();

  Ciculo(int,int,string);
  virtual double getArea();
  virtual string toString();
  virtual ~Ciruclo ();
};
