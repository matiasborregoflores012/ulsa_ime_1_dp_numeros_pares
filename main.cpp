
#include <iostream>


#include "utilerias.h"


int main() {
    
    const int CANTIDAD = 5;

    int pares[CANTIDAD];  int totalPares = 0;  int numero;

    
    for(int i = 0; i < CANTIDAD; i++) {
        std::cout << "Escribe un numero: ";  std::cin >> numero;

        
        if(numero % 2 == 0) {
            pares[totalPares] = numero; totalPares++;
        }
    }

    
    std::cout << "Se guardaron " << totalPares << " numeros pares.\n";
    std::cout << "Los numeros pares son: ";

    for(int i = 0; i < totalPares; i++) {
        std::cout << pares[i] << " ";
    }
    std::cout << std::endl;

    
    return 0;
}