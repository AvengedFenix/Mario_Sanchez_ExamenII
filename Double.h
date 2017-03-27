#pragma once

class Double {
public:
  double d;

public:
  Double ();
  Double (double);
  double operator+(Double*);
  double operator-(Double*);
  virtual ~Double ();
};
