#include "Figura.h"

class Cuadrado {
private:


public:
  Cuadrado ();
  Cuadrado(int,int,string);
  virtual double getArea();
  virtual string toString();
  virtual ~Cuadrado ();
};
