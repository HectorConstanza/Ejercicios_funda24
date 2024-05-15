#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   string nombre;
   float corto1 =0.00;
   float corto2 =0.00;
   float parcial1 =0.00;
   float parcial2 =0.00;
   float laboratorio =0.00;
   float proyecto =0.00;
   float promedio = 0.00;
   float suma = 0.00;

   cout<<"Sistema de calculacion de nota"<<"\n";
   cout<<"Ingrese su nombre"<<"\n";
   cin>>nombre;
   cout<<"Ingrese la nota del corto 1"<<"\n";
   cin>> corto1;
   cout<<"Ingrese la nota del corto 2"<<"\n";
   cin>>corto2;
   cout<<"Ingrese la nota del primer parcial"<<"\n";
   cin>>parcial1;
   cout<<"Ingrese la nota del segundo parcial"<<"\n";
   cin>>parcial2;
   cout<<"ingrese la nora del laboratorio"<<"\n";
   cin>>laboratorio;
   cout<<"Ingrese la nota del proyecto"<<"\n";
   cin>>proyecto;

   suma = ((corto1*0.10)+(corto2*0.10)+(parcial1*0.15)+(parcial2*0.20)+(laboratorio*0.20)+(proyecto*0.25));
      
      if (suma >= 6)
      {
        cout<<nombre <<" Paso la materia felicidades "<<"su promedio es de  "<<suma << "\n";
      }
      else
      {
        cout<<nombre<<"No paso la materia"<<"\n";
      }
      


    return 0;
}