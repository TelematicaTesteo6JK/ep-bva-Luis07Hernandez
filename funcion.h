#include <stdio.h>
#include "iostream"
#include "string"
#include <math.h>
#include <conio.h>

bool semestres(int x){ //Funcion que devuelve True (1) o False (0), si los semestres ingresados son validos!
	
	switch (x)
	{
		case 1: return true; 
		break;
		case 2: return true;
		break;
		case 3: return true;
		break;
		case 4: return true;
		break;
		case 5: return true;
		break;
		case 6: return true;
		break;
		case 7: return true;
		break;
		case 8: return true;
	}
	return false;
}
