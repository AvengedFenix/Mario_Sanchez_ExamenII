#pragma once

#include <string>
using namespace std;

class Figura {
protected:
  int x, y;
  double area;
  string nombre;

public:
  Figura ();
  Figura(int,int, string);
  virtual string toString() = 0;
  virtual double getArea() = 0;
  virtual ~Figura ();
};
