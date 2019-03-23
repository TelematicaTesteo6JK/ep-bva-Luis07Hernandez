//#include "stdafx.h"
#include "stdio.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "funcion.h"
#include <vector>
#include <string>
using namespace std;

bool FileExist(const char * filename){ //Funcion para validar si ya existe archivo, en caso de querer crear multiples archivos. Implementar si es necesario.
	return ifstream(filename);
}

int main(){
	int auxArchivo = 0;
	int x[8] = {-2,1,6,17,0,1,8,-11}; //Test Data
	int y[8]; //Actual Result
	string cadena;
	int esperado[8] = {0,1,1,0,0,1,1,0}; // Expected Result
	
	for (int i=0; i<=7 ; i++){ //Imprime en pantalla el resultado
		y[i] = semestres(x[i]);
		cout<<y[i]<<endl;
	}

	
	

	ofstream file;
	file.open("C:/Users/Luis/Desktop/test/archivo.txt"); //se crea archivo nuevo
	file << "0 es Falso\n";
  	file << "1 es Verdadero \n";
  	file << " \n";
  	file << "Test data | Expected result | Actual result | Pass/Fail";
  	for (int i=0; i<=7; i++){
  		if (y[i]==esperado[i]){  //Si el resultado final es igual al esperado Pass
  			file<< "\n   " << x[i] << "			" << esperado[i] <<"		" << y[i] << "	Pass";
  		} 
		else  //Si el resultado final no es igual al esperado Fail
		{
  				file<< "\n   " << x[i] << "			" << esperado[i] <<"		" << y[i] << "	Fail";
		}
	  }
  	
  	file.close();
  	
  	
	
	return 0;
}
