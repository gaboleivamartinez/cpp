#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int input (int Valor)
{

  if (Valor == 1)
    {
       cout << "Presione \"ENTER\" para lanzar el dado 1";
    }
  else
    {
      cout << "Presione \"ENTER\" para lanzar el dado 2";
    }

   cin. ignore ();
}


int tirardado ()
{
  int correr;
  srand (time (0));
  correr = rand () % 6 + 1;
  cout << "Obtuvo " << correr << endl;
  return correr;
}


int dado (int primerDado, int segundoDado)
{
  cout << "Ha avanzado " << primerDado + segundoDado << " casillas" << endl;
  return  primerDado + segundoDado;
}



int main ()
{
  int total, primerDado, segundoDado;

  input (1);
  primerDado = tirardado ();
  input (2);
  segundoDado = tirardado ();
  total = dado(primerDado, segundoDado);
  return 0;
}
