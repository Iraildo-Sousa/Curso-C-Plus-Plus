//Terceiro código
//Utilizando comandos if, operadores relacionais e de igualdade

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{

    int n1, n2;

    cout << "Digite dois números inteiros que direi a relação entre eles: " << endl;

    cin >> n1 >> n2;

    if (n1 > n2)

        cout << "\n" << n1 << " é maior do que " << n2 << endl;

    if (n1 < n2)

        cout << "\n" << n1 << " é menor do que " << n2 << endl;

    if (n1 == n2)

        cout << "\n" << n1 << " é igual a " << n2 <<endl;

    if (n1 != n2)

        cout << "\n" << n1 << " é diferente de " << n2 << endl;

}
