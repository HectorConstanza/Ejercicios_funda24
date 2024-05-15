#include <iostream>

using namespace std;

int main ()
{
float angulo1 =0.00;
float angulo2 =0.00;
float suma = 0.00;
float angulo3 =0.00;
cout<<"progama para calcular el tercer angulo de un triangulo"<<"\n";
cout<<"Ingrese el primer angulo"<<"\n";
cin>>angulo1;
cout<<"Ingrese el segundo angulo"<<"\n";
cin>>angulo2;

if ((angulo1<0 || angulo2<0)||(angulo1>180 || angulo2>180 ))
{
    cout<<"Uno de los valores es invalido"<<"\n";
}
else
{
suma = angulo1+angulo2;
cout<<"El resultado de la suma es "<<suma<<"\n";
angulo3 = 180-suma;
cout<<"El tercer angulo es "<<angulo3<<"\n";
}


return 0;
}
