#include <iostream>

using namespace std;

int main()
{
    float angulo = 0.00;
    
    cout<<"Programa para saber que tipo de angulo es"<<"\n";

    cout <<"Ingrese el angulo que quiere evaluar"<<"\n";
    cin>>angulo;

    if (angulo<90)
    {
        cout<<"el angulo es agudo"<<"\n";
    }
    else if (angulo>90)
    {
        cout<<"El angulo es obtuso"<<"\n";
    }
    else if (angulo = 90)
    {
        cout<<"El angulo es recto"<<"\n";
    }
    return 0;
    
}