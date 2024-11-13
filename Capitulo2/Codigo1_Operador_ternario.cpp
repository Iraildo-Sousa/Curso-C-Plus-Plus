//Testando o operador ternário (?:)
#include <iostream>
int main(){int nota = 7;

nota >= 6 ? std::cout << "Aprovado!" : std::cout << "Reprovado!";

std::cout << (nota >= 6 ? "\\nAprovado!" : "Reprovado!");

return 0;
}
