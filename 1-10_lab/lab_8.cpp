#include <iostream>

int main() {
    int a, b, c;

    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b;
            
            if (a * a + b * b == c * c) {
                std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
                std::cout << "El producto abc es: " << a * b * c << std::endl;
                return 0;
            }
        }
    }

    std::cout << "No se encontró ningún triplete pitagórico que cumpla a + b + c = 1000." << std::endl;

    return 0;
}
