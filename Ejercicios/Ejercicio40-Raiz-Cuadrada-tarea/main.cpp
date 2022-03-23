#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	int numero=0;
	float  raizCuadrada=0;
	cout<<"PROGRAMA PARA CALCULAR LA RAIZ CUADRADA"<<endl;
	cout<<"Digite un numero: ";
	cin>>numero;
	raizCuadrada=(sqrt(numero));
	
	cout<<"La raiz cuadrada de "<<numero<<" es: "<<raizCuadrada;
	
	return 0;
}
