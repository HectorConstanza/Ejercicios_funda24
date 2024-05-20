#include <iostream>

using namespace std;

int main ()
{
    int num1 = 0;

    cout<<"ingrese un numero entero \n";
    cin>>num1;

    if (num1 <0)
    {
        cout<<"El factorial de un numero negativo no existe";

    }
    else
    {
        int factorial = 1;
        for (int i = num1; i >= 1; i--)
        {
            factorial *=i;
            cout<<"El factorial de "<<num1 <<" es "<<factorial<<"\n";
        }
        
    }
    return 0;
    
}