#include <iostream>

bool esPrimo(long long numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero <= 3) {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
    
    for (long long i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int posicion = 1;  // Comenzamos en la primera posición
    long long numeroPrimo = 2;  // Iniciamos con el primer número primo

    while (posicion < 10001) {
        numeroPrimo++;
        if (esPrimo(numeroPrimo)) {
            posicion++;
        }
    }

    std::cout << "El número primo en la posición 10001 es: " << numeroPrimo << std::endl;

    return 0;
}
