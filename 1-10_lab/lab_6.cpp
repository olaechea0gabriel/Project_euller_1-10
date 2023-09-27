#include <iostream>

int main() {
    int sumadecuadrados = 0;
    int cuadradodesuma = 0;

    // Calcular la suma de los cuadrados de los primeros 100 números
    for (int i = 1; i <= 100; ++i) {
        sumadecuadrados += i * i;
    }

    // Calcular el cuadrado de la suma de los primeros 100 números
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    cuadradodesuma = sum * sum;

    int difference = cuadradodesuma - sumadecuadrados;

    std::cout << "La suma de los cuadrados de los primeros 100 números es: " << sumadecuadrados << std::endl;
    std::cout << "El cuadrado de la suma de los primeros 100 números es: " << cuadradodesuma << std::endl;
    std::cout << "La diferencia es: " << difference << std::endl;

    return 0;
}
