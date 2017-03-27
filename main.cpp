#include "Figura.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "Double.h"
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstdarg>
#include <cstring>

void guardar(){

}

int main(int argc, char const *argv[]) {
  char resp ='s';
  while (resp == 's') {
    std::cout << "Seleccione el ejercicio que desea" << endl;
    int op;
    std::cin >> op;
    switch (op) {
      case 1:{
        stringstream ss;
        Figura* a = new int[10];
        a[0] = new Cuadrado();
        a[1] = new Cuadrado();
        a[2] = new Cuadrado();
        a[3] = new Cuadrado();
        a[4] = new Cuadrado();
        a[5] = new Circulo();
        a[6] = new Circulo();
        a[7] = new Circulo();
        a[8] = new Circulo();
        a[9] = new Circulo();
        for (int i = 0; i < 10; i++) {
          ss << a[i].getNombre() << " " << "Area: " << a[i].getArea() << "; ";
        }//fin for
        ofstream outfile;
        char filename[256] = {0};
        strcpy(filename, "./Figuras.log");
        outfile.open(filename, std::ios::app);
        outfile << ss.str();
        outfile.close();
        break;
      }//fin case 1
      case 2:{

        break;
      }//fin case 2
    }//fin swich op
  }//fin while seguir
  return 0;
}
