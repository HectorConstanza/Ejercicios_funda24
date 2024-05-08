#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int i = 1;
    int range = 0;
    cout << "ingrese un numero";
    cin >> n;
    cout << "ingrese el limite por lo que lo desea multiplicar";
    cin >> range;

    while ( i<=range)
    {
        cout << n <<"*"<< i<<"="<<n*i<<"\n";
        i++;
    }
    return 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << n <<"*"<< i << "=" << n*i << "\n";
    // }

    

    
}