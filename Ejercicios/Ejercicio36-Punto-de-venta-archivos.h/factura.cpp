#include<iostream>

using namespace std;

double subtotal;
float impuesto=0,totalPagar=0;

string listaProductos;

void agregarProducto(string descripcion, int cantidad,double precio)
{
	listaProductos=listaProductos+descripcion+ '\n';
	subtotal= subtotal + (cantidad * precio);
	impuesto=subtotal*0.15;
	totalPagar=subtotal+impuesto;
}

 void imprimirFactura()
{
	system("cls");
	cout<<"******"<<endl;
	cout<<"FACTURA"<<endl;
	cout<<"******"<<endl;
	
	cout<<"Productos: "<<endl;
	cout<<listaProductos;
	
	cout<<endl;
	
	cout<<"Subtotal: "<<subtotal<<endl;
	cout<<"Impuesto 15%: "<<impuesto<<endl;
	cout<<"TOTAL A PAGAR ES: "<<totalPagar<<endl;
	cout<<endl;
	cout<<endl;
	system("pause");
	
}
