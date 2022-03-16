#include<iostream>
#include "productos.h"
#include "Factura.h"
#include "menu.h"

using namespace std;

void  agregarProducto(string descripcion, int cantidad,double precio);
void productos(int opcion)
{
	system ("cls");
	
	int opcionProducto= 0;
	
	switch (opcion)
	{
		case 1:
		
	    cout<<"BEBIDAS CALIENTES"<<endl;
		cout<<"************"<<endl;
		cout<<"1.Capuchino"<<endl;
		cout<<"2.Expreso"<<endl;
		cin>>opcionProducto;
		switch (opcionProducto)
			{
				case 1: agregarProducto("1 Capuchino - L 40.00",1,40);
				break;
				case 2: agregarProducto("2 Expreso - L 30.00",1,30);
				break;
				default:
					{
					cout<< "Opcion no valida";
					return;
					break;
					}
			}
			cout<<endl;
			cout<<"Producto agregado"<<endl<<endl;
			system("pause");
			
		break;
		case 2: cout<<"BEBIDAS FRIAS"<<endl;
		cout<<"************"<<endl;
		cout<<"1.Te Frio"<<endl;
		cout<<"2.Coca Cola"<<endl;
		cin>>opcionProducto;
		switch (opcionProducto)
			{
				case 1: agregarProducto("1 Te lipton - L 25.00",1,25);
				break;
				case 2: agregarProducto("2 Coca Cola - L 20.00 ",1,20);
				break;
				default:
					{
					cout<< "Opcion no valida";
					return;
					break;
					}
			}
			cout<<endl;
			cout<<"Producto agregado"<<endl<<endl;
		system("pause");
		break;
		
		case 3: cout<<"REPOSTERIA"<<endl;
		cout<<"************"<<endl;
		cout<<"1.Chilena"<<endl;
		cout<<"2.Tres leches"<<endl;
		cin>>opcionProducto;
		switch (opcionProducto)
			{
				case 1: agregarProducto("1 Chilena - L 20.00",1,20);
				break;
				case 2: agregarProducto("2 tres leches - L 40.00",1,40);
				break;
				default:
					{
					cout<< "Opcion no valida";
					return;
					break;
					}
			}
			cout<<endl;
			cout<<"Producto agregado"<<endl<<endl;
		system("pause");
		break;
		
		default :
			break;
		
	}
}
