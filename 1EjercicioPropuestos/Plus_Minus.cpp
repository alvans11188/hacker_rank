#include <iostream>
#include <vector>
#include <iomanip> // Para usar setprecision

using namespace std;

void plusMinus(vector<int> arr) {
    int negativos = 0, positivos = 0, ceros = 0;
    int total = arr.size(); // Tamaño del vector

    // Conteo de negativos, positivos y ceros
    for (int i = 0; i < total; i++) {
        if (arr[i] < 0) {
            negativos++;
        } else if (arr[i] > 0) {
            positivos++;
        } else {
            ceros++;
        }
    }

    // Cálculo de los porcentajes
    float totalnega = static_cast<float>(negativos) / total;
    float totalposi = static_cast<float>(positivos) / total;
    float totalcero = static_cast<float>(ceros) / total;

    // Mostrar los resultados con 6 cifras decimales
    cout << fixed << setprecision(6);
    cout << totalposi << endl;
    cout << totalnega << endl;
    cout << totalcero << endl;
}

int main() {
    vector<int> arr = {1, -2, 0, -3, 5}; // Ejemplo de vector
    plusMinus(arr);
    return 0;
}
