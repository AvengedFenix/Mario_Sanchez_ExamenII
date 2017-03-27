#pragma once

class Double {
private:
  Double d;

public:
  Double ();
  Double (Double*);
  Double operator+(Double*, Double*);
  Double operator-(Double*, Double*);
  virtual ~Double ();
};
