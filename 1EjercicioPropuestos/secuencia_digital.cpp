/*Una secuencia digital es una secuencia de números donde el número siguiente de "n" es "n" más la suma de sus dígitos.

Por ejemplo: 12345 es seguido de 12360, el último número se obtiene de sumar:12345 + (1+2+3+4+5) Las secuencias digitales pueden encontrarse en algún punto. Esto pasa cuando dos secuencias digitales comparten el mismo valor.

Veamos otro ejemplo: La secuencia 480 se encuentra con la secuencia 483 en 519.

Además se sabe que toda secuencia eventualmente se encontrará con la secuencia 1, 3 y 9.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int suma(int arreglo1) {
	int numero;
	numero = arreglo1;
    int suma = 0;
    while (numero > 0) {
        int digito = numero % 10; // Obtener el último dígito
        suma += digito;           // Sumar el dígito a la suma total
        numero /= 10;             // Eliminar el último dígito
    }
    return suma;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, sum;
    cin >> n;
     	
    int m=200;
    int aux,a;
    int arreglo1[m], arreglo3[m], arreglo9[m];
    arreglo1[0] = 1;
    arreglo3[0] = 3;
    arreglo9[0] = 9;
    //secuencia 1
    
    for (int i=0;i<200;i++){
		
    	sum = suma(arreglo1[i]);
    	arreglo1[i] =  sum + arreglo1[i];
	}
	
    cout << " respuesta 1: " << sum << endl;
    
    return 0;
}