#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int horaInt;
    string am_pm, min, seg, hora;
    // Ejemplo de entrada: "07:05:45PM" -> salida esperada: "19:05:45"
    // 0123456789
    
    am_pm = s.substr(8, 2);   // Extrae "PM" o "AM"
    min = s.substr(3, 2);     // Extrae los minutos "05"
    seg = s.substr(6, 2);     // Extrae los segundos "45"
    hora = s.substr(0, 2);    // Extrae la hora "07"

    horaInt = stoi(hora); // Convierte la hora a entero para realizar la suma

    // Ajusta la hora segn AM o PM
    if (am_pm == "PM" && horaInt != 12) {
        horaInt = horaInt + 12;  // Convertimos la hora a formato 24h solo si es PM y no es "12"
    } else if (am_pm == "AM" && horaInt == 12) {
        horaInt = 0;    // Convierte "12 AM" a "00" en formato de 24h
    }

    // Formatea la hora a dos dgitos y reconvierte a cadena
    hora = (horaInt < 10 ? "0" : "") + to_string(horaInt);

    // Concatenamos y mostramos el resultado final en formato HH:MM:SS
    cout << hora << ":" << min << ":" << seg << endl;

    return hora + ":" + min + ":" + seg;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
