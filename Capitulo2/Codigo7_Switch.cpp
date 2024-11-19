// Contador de notas representadas por letras.

// Switch e While.

#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

int main ()
{

    int nota, contadorA = 0, contadorB = 0, contadorC = 0, contadorD = 0, contadorF = 0;

    cout << "Forneça as notas representadas por letras, \"a\", \"b\", \"c\", \"d\", e \"f\", apenas uma por vez ou digite \"ctrl + d\" para sair." << endl;


    while ( (nota = cin.get ()) != EOF)
    {

        cout << "\n\nDigite a pŕoxima nota:";
        switch ( nota )
        {
            
            case 'A':
            case 'a':
                ++contadorA;
                break;
            

            case 'B':
            case 'b':
                ++contadorB;
                break;
        

            case 'C':
            case 'c':
                ++contadorC;
                break;
        

            case 'D':
            case 'd':
                ++contadorD;
                break;
         

            case 'F':
            case 'f':
                ++contadorF;
                break;
            

            case '\n':
            case '\t':
            case ' ':
            break;


            default:
                cout <<  "\n\nO caractere fornecido estava incorreto e não corresponde aos requisitados acima.\n\n Digite uma nova nota: ";
                    break;

        }//switch ( nota )


    }//while ( (nota = cin.get ()) != EOF)

    cout << "\n\nO total para cada nota digitada é:" << "\n\nA : " << contadorA << "\nB : " << contadorB << "\nC : " << contadorC << "\nD : " << contadorD << "\nF : " << contadorF << endl;

    return 0;

}//int main ()
