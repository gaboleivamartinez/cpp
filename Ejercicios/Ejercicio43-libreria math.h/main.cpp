#include <iostream>
#include <math.h>
#define Pi 3.1416

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	float  numero = 0;
	float  seno = 0;
	float  coseno= 0;
	float  tangente = 0;
	
	numero = 2*Pi;
	seno = sin(numero);
	coseno = cos(numero);
	tangente = tan(numero);
	
	cout <<"numero: "<<numero<<endl;
	cout<<"Seno: "<<seno<<endl;
	cout<<"coseno: "<<coseno<<endl;
	cout<<"tangente: "<<tangente<<endl;
	return 0;
}
