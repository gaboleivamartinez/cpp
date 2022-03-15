#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void imprimirCaracteres(char caracter,int ciclos)
{
	for (int i=0; i<ciclos; i++)
	{
		cout<<caracter;
	}
}
int main(int argc, char** argv) {
	imprimirCaracteres('@',10);
	imprimirCaracteres('*',5);
	cout<<" Hola Mundo "<<endl;
	imprimirCaracteres('*',1000);
	return 0;
}
