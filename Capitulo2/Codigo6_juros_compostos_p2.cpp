//Cálculo de juros compostos parte 2.

#include <iostream> //biblioteca para interação com o usuário.

using std :: cout;
using std :: endl;
using std :: ios;

#include <iomanip>

using std :: setw;
using std :: setiosflags;
using std :: setprecision;

#include <cmath>

int main ()
{

    double amount, // quantia em depósito. //
    principal = 1000.0, // inicializando o capital. 
    rate = .05; // taxa de juros.

    cout << "  Ano" << setw ( 28 ) << "Quantia em depósito" << endl;

    // ajusta o formato de números em ponto flutuante.

    cout << setiosflags ( ios :: fixed | ios :: showpoint ) << setprecision (2);

    for ( int year = 1; year <= 10; year++ )
    {

        amount = principal * pow ( 1.0 + rate, year );
        cout << setw (4) << year << setw (21) << amount << endl;

    }//for ( int year = 1; year <= 10; year++ )

    return 0;
}//int main ()
