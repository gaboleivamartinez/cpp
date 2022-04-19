#include<iostream>
#include<stdlib.h>
#include<time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main(int argc, char** argv) {
	int numero=0;
	int sumaArreglo=0;
	int numerosArreglo=0;
	
	srand(time(NULL));
	
	
	
	int numerosArreglos[5][5];
	numerosArreglos[0][0] =numero= rand()% 10 + 1;
	numerosArreglos[0][1] =numero= rand()% 70 + 1;
	numerosArreglos[0][2] =numero= rand()% 70 + 1;
	numerosArreglos[0][3] =numero= rand()% 70 + 1;
	numerosArreglos[0][4] =numero= rand()% 70 + 1;
	
	
	numerosArreglos[1][0] =numero= rand()% 50 + 1;
	numerosArreglos[1][1] =numero= rand()% 60 + 1;
	numerosArreglos[1][2] =numero= rand()% 60 + 1;
	numerosArreglos[1][3] =numero= rand()% 60 + 1;
	numerosArreglos[1][4] =numero= rand()% 60 + 1;
	
	
	numerosArreglos[2][0] =numero= rand()% 100+ 1;
	numerosArreglos[2][1] =numero= rand()% 10 + 1;
	numerosArreglos[2][2] =numero= rand()% 10 + 1;
	numerosArreglos[2][3] =numero= rand()% 10 + 1;
	numerosArreglos[2][4] =numero= rand()% 10 + 1;
	
	numerosArreglos[3][0] =numero= rand()% 10 + 1;
	numerosArreglos[3][1] =numero= rand()% 10 + 1;
	numerosArreglos[3][2] =numero= rand()% 10 + 1;
	numerosArreglos[3][3] =numero= rand()% 10 + 1;
	numerosArreglos[3][4] =numero= rand()% 10 + 1;
	
	numerosArreglos[4][0] =numero= rand()% 10 + 1;
	numerosArreglos[4][1] =numero= rand()% 10 + 1;
	numerosArreglos[4][2] =numero= rand()% 10 + 1;
	numerosArreglos[4][3] =numero= rand()% 10 + 1;
	numerosArreglos[4][4] =numero= rand()% 10 + 1;
	
	for (int i=0; i<5;i++)
	{
	  cout<<numerosArreglos[i][0]<<endl;
	  cout<<numerosArreglos[i][1]<<endl;
	  cout<<numerosArreglos[i][2]<<endl;   
	  cout<<numerosArreglos[i][3]<<endl;
	  cout<<numerosArreglos[i][4]<<endl; 
	  
	  sumaArreglo= numerosArreglos[i][0] + numerosArreglos[i][1] + numerosArreglos[i][2] + numerosArreglos[i][3] + numerosArreglos[i][4] + sumaArreglo;
	   
	}
	
	cout<<"\nTOTAL SUMA: "<<sumaArreglo;
	
	return 0;
}
