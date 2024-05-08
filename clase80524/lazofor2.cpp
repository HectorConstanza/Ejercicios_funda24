#include <iostream>
using namespace std;

int main ()
{
 int n;
 bool esprimo= true;

 cout<<"Ingrese un numero cualquiera"<<"\n";
 cin>>n;

 for ( int i=2; i <= 2; i++)
 {
    if (n % i == 0)
    {
        esprimo=false;
        break;
        
    }
 }
 if (esprimo)
 {
    cout<<n<<" ES PRIMO "<<"\n";
 }
 else
 {
    cout<<n<<" No ES PRIMO "<<"\n";
 }
 
 return 0;
   
}