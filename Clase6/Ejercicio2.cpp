#include <iostream>
#include <cstdlib>
#include <math.h>

#define ANSI_COLOR_GREEN   "\x1b[32m"

using namespace std;
int numAsiento=0;

int main(){
// Pelicula 1
    string avengers[5][5]={
        {"Disponible\t","Disponible\t","Disponible\t","Disponible\t","Disponible\t"},
        {"Disponible\t","Disponible\t","Disponible\t","Disponible\t","Disponible\t"},
        {"Disponible\t","Disponible\t","Disponible\t","Disponible\t","Disponible\t"},
        {"Disponible\t","Disponible\t","Disponible\t","Disponible\t","Disponible\t"},
        {"Disponible\t","Disponible\t","Disponible\t","Disponible\t","Disponible\t"}
    };

 //Ciclo que recorre la película 1
    for(int fila=0;fila<5;fila++){
      for(int columna=0;columna<5;columna++){
        cout<<numAsiento;
        cout<<ANSI_COLOR_GREEN<<avengers[fila][columna];
        numAsiento ++;
      }
      cout<<endl;
    }

//1.-Preguntar que asiento quiere elegir:

//2.-Poner en ocupado ese asiento

//3.-Mostrar la matriz para revisar si se actualizo

   
}