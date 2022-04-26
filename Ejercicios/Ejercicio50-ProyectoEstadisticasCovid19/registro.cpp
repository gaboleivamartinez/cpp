#include<iostream>
#include "login.h"
#include<math.h>

using namespace std;
   string listaPacientes;
    void agregarPaciente(string descripcion){
	
	listaPacientes=listaPacientes+descripcion+ '\n';
	
	}
int registro()
{
	int casosNuevos;
    int opcion,opcionSexo,opcionEdad;
    int contadorcasosNuevos;
    int muertosHoy;
    
    float totalCasos,totalMuertos;
    
	system("cls");	
	const float casosCovid = 422275, muertes=10892;
	while (true)
		
	{ 
	  system("cls");
	  cout<<"\tBIENVENIDOS AL PROGRAMA ESTADISTICAS COVID-19"<<endl;
	  cout<<"Actualmente tenemos: "<<casosCovid<<" casos de COVID-19 en Honduras."<<endl;
	  cout<<"Con un total de muertes: "<<muertes<<endl<<endl;
	  cout<<"Seleccione el departamento de procedencia:  "<<endl;
	  cout<<"1. Cortes."<<endl;
	  cout<<"2. Francisco Morazan."<<endl;
	  cout<<"3. Atlantida. "<<endl;
	  cout<<"4. Imprimir Encuesta y salir"<<endl;
	  cout<<"5. Opcion: ";
	  cin>>opcion;
	 system("cls");
      if (opcion==1)
      {
      	cout<<"Seleccione el sexo: "<<endl;
      	cout<<"1.Masculino."<<endl;
      	cout<<"2.Femenino."<<endl;
      	cout<<"3. Opcion: ";
      	cin>>opcionSexo;
      	system("cls");
      	if (opcionSexo==1)
      	  {
      		cout<<"Digite el rango de edad: "<<endl;
      		cout<<"1.Niños (0 - 11 años);"<<endl;
      		cout<<"2.Adolescentes  (12 - 18 años)."<<endl;
      		cout<<"3.Adultos (19-59)."<<endl;
      		cout<<"4.Persona Mayor (60 años o mas)."<<endl;
      		cout<<"Opcion: ";
      		cin>>opcionEdad;
      		switch (opcionEdad)
      		{
      			case 1: agregarPaciente("1 Niño (0 - 11 años) del Sexo MASCULINO del departamento de Cortes.");
      			contadorcasosNuevos++;
      			break;
      			case 2: agregarPaciente("1 Adolescente (12 - 18 años) del Sexo MASCULINO del departamento de Cortes.");
      			contadorcasosNuevos++;
      			break;
      			case 3: agregarPaciente("1 Adulto (19 - 59 años) del Sexo MASCULINO del departamento de Cortes.");
      			contadorcasosNuevos++;
      			break;
      			case 4: agregarPaciente("1 Persona Mayor (60 años o mas) del Sexo MASCULINO del departamento de Cortes.");
      			contadorcasosNuevos++;
      			break;
      			default:
      				cout<< "Opcion no valida";
					break;
			  }
      			
			cout<<endl;
			cout<<"Paciente agregado"<<endl<<endl;
		
		  }
		  
		  if (opcionSexo==2)
		  {
		  	cout<<"Digite el rango de edad: "<<endl;
      		cout<<"1.infantes (0 - 11 años);"<<endl;
      		cout<<"2.Adolescentes  (12 - 18 años)."<<endl;
      		cout<<"3.Adultos (19-59)."<<endl;
      		cout<<"4.Persona Mayor (60 años o mas)."<<endl;
      		cout<<"Opcion: ";
      		cin>>opcionEdad;
      		switch (opcionEdad)
      		{
      			case 1: agregarPaciente("1 infante (0 - 11 años) del Sexo FEMENINO del departamento de Cortes.");
      			contadorcasosNuevos++;
      			break;
      			case 2: agregarPaciente("1 Adolescente (12 - 18 años) del Sexo FEMENINO del departamento de Cortes.");
      			contadorcasosNuevos++;
      			break;
      			case 3: agregarPaciente("1 Adulto (19 - 59 años) del Sexo FEMENINO del departamento de Cortes.");
      			contadorcasosNuevos++;
      			break;
      			case 4: agregarPaciente("1 Persona Mayor (60 años o mas) del Sexo FEMENINO del departamento de Cortes.");
      			contadorcasosNuevos++;
      			break;
      			default:
      				cout<< "Opcion no valida";
					break;
			  }
      			
			cout<<endl;
			cout<<"Paciente agregado"<<endl<<endl;
			
		  }
	  }
	  if (opcion == 2)
	  {
      	cout<<"Seleccione el sexo: "<<endl;
      	cout<<"1.Masculino."<<endl;
      	cout<<"2.Femenino."<<endl;
      	cout<<"3. Opcion: ";
      	cin>>opcionSexo;
      	system("cls");
      	if (opcionSexo==1)
      	  {
      		cout<<"Digite el rango de edad: "<<endl;
      		cout<<"1.Niños (0 - 11 años);"<<endl;
      		cout<<"2.Adolescentes  (12 - 18 años)."<<endl;
      		cout<<"3.Adultos (19-59)."<<endl;
      		cout<<"4.Persona Mayor (60 años o mas)."<<endl;
      		cout<<"Opcion: ";
      		cin>>opcionEdad;
      		switch (opcionEdad)
      		{
      			case 1: agregarPaciente("1 Niño (0 - 11 años) del Sexo MASCULINO del departamento de Francisco Morazan.");
      			contadorcasosNuevos++;
      			break;
      			case 2: agregarPaciente("1 Adolescente (12 - 18 años) del Sexo MASCULINO del departamento de Francisco Morazan.");
      			contadorcasosNuevos++;
      			break;
      			case 3: agregarPaciente("1 Adulto (19 - 59 años) del Sexo MASCULINO del departamento de Francisco Morazan.");
      			contadorcasosNuevos++;
      			break;
      			case 4: agregarPaciente("1 Persona Mayor (60 años o mas) del Sexo MASCULINO del departamento de Francisco Morazan.");
      			contadorcasosNuevos++;
      			break;
      			default:
      				cout<< "Opcion no valida";
					break;
			  }
      			
			cout<<endl;
			cout<<"Paciente agregado"<<endl<<endl;
			
		  }
		  
		  if (opcionSexo==2)
		  {
		  	cout<<"Digite el rango de edad: "<<endl;
      		cout<<"1.infantes (0 - 11 años);"<<endl;
      		cout<<"2.Adolescentes  (12 - 18 años)."<<endl;
      		cout<<"3.Adultos (19-59)."<<endl;
      		cout<<"4.Persona Mayor (60 años o mas)."<<endl;
      		cout<<"Opcion: ";
      		cin>>opcionEdad;
      		switch (opcionEdad)
      		{
      			case 1: agregarPaciente("1 infante (0 - 11 años) del Sexo FEMENINO del departamento de Francisco Morazan.");
      			contadorcasosNuevos++;
      			break;
      			case 2: agregarPaciente("1 Adolescente (12 - 18 años) del Sexo FEMENINO del departamento de Francisco Morazan.");
      			contadorcasosNuevos++;
      			break;
      			case 3: agregarPaciente("1 Adulto (19 - 59 años) del Sexo FEMENINO del departamento de Francisco Morazan.");
      			contadorcasosNuevos++;
      			break;
      			case 4: agregarPaciente("1 Persona Mayor (60 años o mas) del Sexo FEMENINO del departamento de Francisco Morazan.");
      			contadorcasosNuevos++;
      			break;
      			default:
      				cout<< "Opcion no valida";
					break;
			  }
      			
			cout<<endl;
			cout<<"Paciente agregado"<<endl<<endl;
		
		  }
	  }
	  
	  if (opcion==3)
	  {
      	cout<<"Seleccione el sexo: "<<endl;
      	cout<<"1.Masculino."<<endl;
      	cout<<"2.Femenino."<<endl;
      	cout<<"3. Opcion: ";
      	cin>>opcionSexo;
      	system("cls");
      	if (opcionSexo==1)
      	  {
      		cout<<"Digite el rango de edad: "<<endl;
      		cout<<"1.Niños (0 - 11 años);"<<endl;
      		cout<<"2.Adolescentes  (12 - 18 años)."<<endl;
      		cout<<"3.Adultos (19-59)."<<endl;
      		cout<<"4.Persona Mayor (60 años o mas)."<<endl;
      		cout<<"Opcion: ";
      		cin>>opcionEdad;
      		switch (opcionEdad)
      		{
      			case 1: agregarPaciente("1 Niño (0 - 11 años) del Sexo MASCULINO del departamento de ATLANTIDA.");
      			contadorcasosNuevos++;
      			break;
      			case 2: agregarPaciente("1 Adolescente (12 - 18 años) del Sexo MASCULINO del departamento de ATLANTIDA.");
      			contadorcasosNuevos++;
      			break;
      			case 3: agregarPaciente("1 Adulto (19 - 59 años) del Sexo MASCULINO del departamento de ATLANTIDA.");
      			contadorcasosNuevos++;
      			break;
      			case 4: agregarPaciente("1 Persona Mayor (60 años o mas) del Sexo MASCULINO del departamento de ATLANTIDA.");
      			contadorcasosNuevos++;
      			break;
      			default:
      				cout<< "Opcion no valida";
					break;
			  }
      			
			cout<<endl;
			cout<<"Paciente agregado"<<endl<<endl;

		  }
		  
		  if (opcionSexo==2)
		  {
		  	cout<<"Digite el rango de edad: "<<endl;
      		cout<<"1.infantes (0 - 11 años);"<<endl;
      		cout<<"2.Adolescentes  (12 - 18 años)."<<endl;
      		cout<<"3.Adultos (19-59)."<<endl;
      		cout<<"4.Persona Mayor (60 años o mas)."<<endl;
      		cout<<"Opcion: ";
      		cin>>opcionEdad;
      		switch (opcionEdad)
      		{
      			case 1: agregarPaciente("1 infante (0 - 11 años) del Sexo FEMENINO del departamento de ATLANTIDA.");
      			contadorcasosNuevos++;
      			break;
      			case 2: agregarPaciente("1 Adolescente (12 - 18 años) del Sexo FEMENINO del departamento de ATLANTIDA.");
      			contadorcasosNuevos++;
      			break;
      			case 3: agregarPaciente("1 Adulto (19 - 59 años) del Sexo FEMENINO del departamento de ATLANTIDA.");
      			contadorcasosNuevos++;
      			break;
      			case 4: agregarPaciente("1 Persona Mayor (60 años o mas) del Sexo FEMENINO del departamento de ATLANTIDA.");
      			contadorcasosNuevos++;
      			break;
      			default:
      				cout<< "Opcion no valida";
					break;
			  }
      			
			cout<<endl;
			cout<<"Paciente agregado"<<endl<<endl;
		  }
	  }
	  
	  if (opcion==4)
	  {
	  	break;
	  }
	  
	  system("pause");
	 

}
cout<<"LAS ESTADISTICAS DEL DIA DE HOY SON: "<<endl<<endl;
cout<<listaPacientes<<endl;
cout<<"TOTAL CASOS NUEVOS: "<<contadorcasosNuevos<<endl;
cout<<"Digite la cantidad de muertos del dia de hoy: ";
cin>>muertosHoy;
totalCasos=contadorcasosNuevos+casosCovid;
totalMuertos=muertes+muertosHoy;
cout<<endl;
cout<<"TOTAL CASOS COVID-19 EN HONDURAS: "<<totalCasos<<endl;
cout<<"TOTAL DE MUERTOS POR COVID-19 EN HONDURAS: "<<totalMuertos<<endl;

}
