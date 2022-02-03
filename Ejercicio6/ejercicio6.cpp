#include<iostream>


using namespace std;

int main()

{
	int a=0;
	int b=0;
	int suma=0,multiplicacion=0,division=0,resta=0;
	cout<<"PROGRAMA CALCULADORA"<<endl;
	cout<<"digite el primer numero: ";
	cin>>a;
	cout<<"Digite el segundo numero: ";
	cin>>b;
	
	suma=a+b;
	multiplicacion=a*b;
	division=a/b;
	resta=a-b;
	
	cout<<endl;
	cout<<"La suma de "<<a<<" + "<<b<<" es: "<<suma<<endl;
	cout<<"La multiplicacion de "<<a<<" * "<<b<<" es: "<<multiplicacion<<endl;
	cout<<"La division de "<<a<<" / "<<b<<" es: "<<division<<endl;
	cout<<"La resta de "<<a<<" - "<<b<<" es:"<<resta<<endl;
	
	
	return 0;
	
	
}
