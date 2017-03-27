#include "Figura.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "Double.h"
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstdarg>
#include <cstring>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<string> readfile(vector<string> v){
    ifstream File;
    File.open("Figuras.log");
    char output[19];
    if (File.is_open()) {
        while (!File.eof()) {
            File >> output;
            //cout<<output;
        }//fin while
        string s;
        /*if (!getline( File, s )) {
        }

        istringstream ss( s );
        vector <string> record;

        while (ss)
        {
          string s;
          if (!getline(ss, s, ';')) {
          }
          v.push_back(s);
      }*/
      /*while (File.good())
          {
                  File.getline(output, 256, ';');
                  v.push_back(output);
          }*/
          while(std::getline(File, s)) {
          std::stringstream linestream(s);
          std::string data;
          int val1;
          int val2;
          std::getline(linestream, data, ';');
          v.push_back(linestream.str());
      }
   }//fin if
   File.close();
   return v;
}

int main(int argc, char const *argv[]) {
  char resp ='s';
  while (resp == 's') {
    std::cout << "Seleccione el ejercicio que desea \n1. Figuras \n2. Sobrecarga de operadores \n3. Lectura de datos" << endl;
    int op;
    std::cin >> op;
    switch (op) {
      case 1:{
        stringstream ss;
        Figura* a[10];
        a[0] = new Cuadrado(20,20,"Cuadrado1");
        a[1] = new Cuadrado(10,10,"Cuadrado2");
        a[2] = new Cuadrado(7,7,"Cuadrado3");
        a[3] = new Cuadrado(6,6,"Cuadrado4");
        a[4] = new Cuadrado(5,5,"Cuadrado5");
        a[5] = new Circulo(20,20,"Circulo1");
        a[6] = new Circulo(20,20,"Circulo2");
        a[7] = new Circulo(25,25,"Circulo3");
        a[8] = new Circulo(15,15,"Ciruclo4");
        a[9] = new Circulo(10,10,"Circulo5");
        for (int i = 0; i < 10; i++) {
          ss << a[i]->toString() << " " << "Area: " << a[i]->getArea() << "; ";
        }//fin for
        ofstream outfile;
        char filename[256] = {0};
        strcpy(filename, "./Figuras.log");
        outfile.open(filename, std::ios::app);
        outfile << ss.str();
        outfile.close();
        for (int i = 0; i < 10; i++) {
            delete a[i];
        }
        //delete a;
        std::cout << "Imagenes guardadas y destruidas de RAM con exito" << endl;
        break;
      }//fin case 1
      case 2:{
          double a1;
          double b1;
          double c1;
          std::cout << "Ingrese el numero de primer double" << endl;
          std::cin >> a1;
          Double* a = new Double(a1);
          std::cout << "Ingrese el numero del segundo double" << endl;
          std::cin >> b1;
          Double* b = new Double(b1);
          int sumaresta;
          std::cout << "Quiere sumar o restar? \n1. Sumar\n2. Restar" << endl;
          std::cin >> sumaresta;
          double c;
          if (sumaresta==1) {
              c = *a+b;
          }else{
              c = *a-b;
          }

          std::cout << "El resutado es: "<< c << endl;
          delete b;
          delete a;
        break;
      }//fin case 2
      case 3:{
          vector<string> v;
          readfile(v);
          std::cout << "Cargado con exito" << endl;
          std::cout << "Size: " << v.size() << endl;
          for (int i = 0; i < v.size(); i++) {
              std::cout << v[i] << endl;
          }
          break;
      }//fin case 3
    }//fin swich op
    std::cout << "Desea seguir s/n" << endl;\
    std::cin >> resp;
  }//fin while seguir
  return 0;
}
