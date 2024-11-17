//Programa para cálculo de porcentagem

#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

int main ()
{

double total, acertos, porcentagem, c, c1, sair;


    while (sair != 777)
    {

        cout << "\nDigite a quantidade de notas da música ou \"777\" para sair: ";
        cin >> total;
        sair = total;
        cout << "\n";

        if (total != 777)
        {

            cout << "Agora digite a quantidade de acertos: ";
            cin >> acertos;
            sair = acertos;

            porcentagem =  (acertos / total) * 100;
            //c = (100 - porcentagem);
            //c1 = (100 - c);
            //porcentagem = c; 

            cout << "\nA porcentagem de acertos nessa música foi de " << porcentagem << "%.\n" << endl;


        }//if (total != 777)

        if (sair == 777){

            break;

        }//if (sair == 777){

    }//while (sair != 777)

    return 0;

}//int main ()
