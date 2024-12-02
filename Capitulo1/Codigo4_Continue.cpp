// Código para testar o comando "continue".

#include <iostream>

using std :: cout;
using std :: endl;
using std :: cin;

int main ()
{

    int x = 1, pular;

    cout << "Supondo que você é um maratonista e está numa competição correndo 10km. Você decide em uma das voltas pegar um uber para avançar ao menos 1km. Em qual km você pegou o Uber? ";

    cin >> pular;

    cout << endl;

    for ( x; x <= 10; ++x )
    {


        if (x == pular) {

            cout << "Você pegou o Uber em " << pular << "km" << endl;
            continue;

        } /* if (x == pular) */

        cout << "Você andou " << x << "km" << endl;

    } /* for ( x; x <= 10; ++x ) */

    return 0;
} /* int main () */
