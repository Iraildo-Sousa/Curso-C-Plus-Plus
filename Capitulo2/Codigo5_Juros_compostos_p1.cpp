//Cálculo de juros compostos.

#include <iostream>

using std :: cout;
using std :: endl;

int main ()
{

    float ano, rendimento = 5, investimento = 1000, total_em_10_anos;

    for (ano; ano <= 10; ano++, investimento = (investimento * rendimento / 100) + investimento)
    {

        if (ano >= 1)
        {

            cout << "No " << ano << "º ano seu investimento é de R$ " << investimento  << "." << endl;

        }//if (ano >= 1)

    }//for (ano; ano <= 10; ano++)

    return 0;
}//int main ()
