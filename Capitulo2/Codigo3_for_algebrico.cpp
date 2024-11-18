//Testando For com expressões algébricas.

#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

int main ()
{

    int x, y, z;

    cout << "Quanto vale x? ";
    cin >> x;

    cout << "\nQuanto vale y? ";
    cin >> y;

    cout << "\nQuanto vale z? ";
    cin >> z;

    cout << endl;

    for ( x;y = y * z > x; x++ ) 
    {

        cout << endl << "\nx = " << x << endl << "y = " << y << endl << "z = " << z << endl << endl;

    }//for (x = y;y = y * z; z++)
        

    return 0;

}//int main ()
