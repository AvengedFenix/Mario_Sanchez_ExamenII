#pragma once

#include <string>

class Figura {
protected:
  int x, y;
  double area;
  string nombre;

public:
  Figura ();
  FIgura(x,y, string);
  virtual string toString() = 0;
  virtual double getArea() = 0;
  virtual ~Figura ();
};
