#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
     char replay;
     do
     {
        srand(time(0));
    int opusario = 0;
    int oppc = 0;


    cout<<"Ingrese una opcion \n";
    cout<<"1) piedra \n";
    cout<<"2) papel \n";
    cout<<"3) tijeras \n";
    cin>>opusario;


    //la computadora genera una opcion radmon
    oppc = rand() %3 +1;


    cout<<"tu eleccion fue ";
    switch (opusario)
    {
    case 1:
        cout<<"Piedra \n";
        break;
    
    case 2:
        cout<<"Papel \n";
        break;    

    case 3:
        cout<<"tijeras \n";
        break;
    default:
        cout<<"opcion invalida \n";
        break;
    }

    cout<<"\nla eleccion de la computadora fue ";
    switch (oppc)
    {
    case 1:
        cout<<"Piedra \n";
        break;
    
    case 2:
        cout<<"Papel \n";
        break;    

    case 3:
        cout<<"tijeras \n";
        break;
    }

    if (opusario == oppc)
    {
        cout<<"\nes un empate \n";
    }else if ( (opusario == 1 && oppc == 3)||(opusario == 2 && oppc == 1) || (opusario == 3 && oppc == 2) )
    {
        cout<<"\nusted gano \n";
    }else
    {
        cout<<"\nusted perdio \n";
    }
    cout<<"\nQuiere volver a jugar (Y/n)\n";
    cin>>replay;
     } while (replay == 'y' || replay == 'Y');
    return 0;
    
    
}
