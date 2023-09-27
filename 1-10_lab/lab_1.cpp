#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << "La suma de los múltiplos de 3 o 5 por debajo de 1000 es: " << sum << std::endl;

    return 0;
}
