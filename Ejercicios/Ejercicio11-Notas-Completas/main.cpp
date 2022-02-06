#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int nota=0;
	cout<<"Ingrese la nota que obtuvo: ";
	cin>>nota;
	
	if (nota==100)
	{
		cout<<"Obtuviste una A++";
	}
	else 
	if (nota>=95 and nota<100)
	{
		cout<<"Obtuviste una A+";
	}
	else
	if (nota>=90 and nota<=94)
	{
		cout<<"Obtuviste una A";
	}
	else
	if (nota>=85 and nota<=89)
	{
		cout<<"Obtuviste una A-";
	}
	else
	if (nota>=80 and nota<=84)
	{
		cout<<"Obtuviste una B+";
	}
	else
	if (nota>=75 and nota<=79)
	{
		cout<<"Obtuviste una B";
	}
	else
	if (nota>=70 and nota<=74)
	{
		cout<<"Obtuviste una B-";
	}
	else
	if (nota>=60 and nota<=69)
	{
		cout<<"Obtuviste una C";
	}
	else
	if (nota>=55 and nota<=59)
	{
		cout<<"Obtuviste una C-";
	}
	else
	if (nota>=50 and nota<=54)
	{
		cout<<"Obtuviste una D+";
	}
	else
	if (nota>=45 and nota<=49)
	{
		cout<<"Obtuviste una D";
	}
	else
	if (nota>=40 and nota<=44)
	{
		cout<<"Obtuviste una D-";
	}
	else
	if (nota>=35 and nota<=39)
	{
		cout<<"Obtuviste una E+";
	}
	else
	if (nota>=30 and nota<=34)
	{
		cout<<"Obtuviste una E";
	}
	else
	if (nota>=25 and nota<=29)
	{
		cout<<"Obtuviste una E-";
	}
	else
	if (nota>=20 and nota<=24)
	{
		cout<<"Obtuviste una F+";
	}
	else
	if (nota>=10 and nota<=19)
	{
		cout<<"Obtuviste una F";
	}
	else
	if (nota>=5 and nota<=9)
	{
		cout<<"Obtuviste una F-";
	}
	else
	if (nota>=0 and nota<=4)
	{
		cout<<"Obtuviste una F--";
	}
	else
	{
		cout<<"Ingrese una nota entre 0-100";
	}
	
	
	return 0;
}
