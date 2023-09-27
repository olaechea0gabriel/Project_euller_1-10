#include <iostream>
#include <cmath>

int main() {
    long long numero = 600851475143LL;
    long long resp = -1; 

    // Buscamos los factores primos 2 primero
    while (numero % 2 == 0) {
        resp = 2;
        numero /= 2;
    }

    // Ahora buscamos factores primos impares
    for (long long i = 3; i <= sqrt(numero); i += 2) {
        while (numero % i == 0) {
            resp = i;
            numero /= i;
        }
    }

    // Si el número restante es mayor que 1, es un factor primo
    if (numero > 1) {
        resp = numero;
    }

    std::cout << "El factor primo más grande de 600851475143 es: " << resp << std::endl;

    return 0;
}
