#include <iostream>
#include<stdlib.h>
#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int numeroSecreto =0;
	int miNumero =0;
	
	// inicializa el numero random
	srand(time(NULL));
	
	//genera un numero entre 1 al 10
	numeroSecreto = rand() % 10 + 1;
	do 
	{
		cout <<"Adivina el numero del (1 a 10) ";
		cin>>miNumero;
		
		if (numeroSecreto < miNumero)
		{
			cout<<" El numero secreto puede ser menor "<<endl;
		}
		else 
		{
			if (numeroSecreto>miNumero)
			{
			cout<<" El numero secreto puede ser mayor "<<endl;
			}
		}
		
	}while (numeroSecreto != miNumero);
	cout<<endl;
	cout<<"ADIVINASTE EL NUMERO"<<endl;
	
	return 0;
}
