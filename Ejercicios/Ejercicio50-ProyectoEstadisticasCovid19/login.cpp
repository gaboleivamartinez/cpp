#include<iostream>
#include "registro.h"


using namespace std;

int login()
{
	while (true)
{
	system("cls");
	string usuario;
	int contrasena;
	cout<<"\tBIENVENIDOS AL PROGRAMA ESTADISTICAS COVID-19"<<endl;
	cout<<"Digite el usuario: ";
	cin>>usuario;
	cout<<"Digite la contraseña: ";
	cin>>contrasena;
	
	if (usuario=="admin" and contrasena==1234)
	{
		system("cls");
	    registro();
	    break;
	
	}
	else
	{
		cout<<"Usuario o contraseña incorrecta."<<endl;
		cout<<"\nPor favor, intenta de nuevo"<<endl;
		system ("pause");
	}
}
	
	
}
