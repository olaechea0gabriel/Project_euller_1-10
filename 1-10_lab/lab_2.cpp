#include <iostream>

int main() {
    int term1 = 1;
    int term2 = 2;
    int iterador = 0;
    int sumatotal = 2;

    while (iterador <= 4000000) {
        iterador = term1 + term2;

        if (iterador % 2 == 0) {
            sumatotal += iterador; 
        }

        term1 = term2;
        term2 = iterador;
    }

    std::cout << "La suma de los términos pares de la secuencia de Fibonacci hasta los 4 millones es: " << sum << std::endl;

    return 0;
}
