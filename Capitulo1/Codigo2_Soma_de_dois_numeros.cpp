//Programa numero2
//Este código soma dois números inteiros.

#include <iostream>

int main ()
{

    int numero1, numero2, resultado;

    std::cout << "Vamos realizar uma soma. Por gentileza digite um número: ";
    std::cin >> numero1;

    std::cout << "\nAgora digite outro número: ";
    std::cin >> numero2;

    resultado = numero1 + numero2;

    std::cout << "\nO resultado de " << numero1 << " + " << numero2 << " = " << resultado << "." << std::endl;

    std::cout << numero1 + numero2 << std::endl;

    return 0;

}
