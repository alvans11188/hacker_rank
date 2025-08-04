#include <iostream>

int sumarDigitos(int numero) {
    int suma = 0;
    while (numero > 0) {
        int digito = numero % 10; // Obtener el último dígito
        suma += digito;           // Sumar el dígito a la suma total
        numero /= 10;             // Eliminar el último dígito
    }
    return suma;
}

int main() {
    int numero = 17;

    // Sumar los dígitos de 17
    int sumaDigitos = sumarDigitos(numero);

    // Sumar el resultado al número inicial
    int resultadoFinal = sumaDigitos + numero;

    std::cout << "La suma de los dígitos de " << numero << " es: " << sumaDigitos << std::endl;
    std::cout << "Sumando el valor original, el resultado final es: " << resultadoFinal << std::endl;

    return 0;
}
