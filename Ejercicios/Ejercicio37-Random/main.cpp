#include <iostream>
#include<stdlib.h>
#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int numero = 0;
	
	srand(time(NULL));
	
	for(int i=0;i<20;i++)
	{
		numero= rand()% 10 + 1;
		cout<<"Numero al azar "<<numero<<endl;
	}
	return 0;


