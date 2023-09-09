// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 13
// Problema planteado:tiene N sucursales, leer sus ventas por mes de un año entero de cada sucursal y calcule:a. Total, de ventasb. Total, de ventas por sucursal.c. Sucursal que más ha vendido.d. Sucursal que menos ha vendido.
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese el número de sucursales: ";cin >> N;
    int ventas[N][12];
    cout << "Ingrese las ventas por mes de cada sucursal:\n";
    for (int i = 0; i < N; i++) {
        cout << "Sucursal " << i + 1 << ":\n";
        for (int j = 0; j < 12; j++) {
            cout << "Mes " << j + 1 << ": ";cin >> ventas[i][j];
        }
        cout << "\n";
    }
    int total = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 12; j++) {
            total += ventas[i][j];
        }
    }
    cout << "El total de ventas es: " << total << "\n\n";
    int totales[N]; //total de ventas por sucursal
        for (int i = 0; i < N; i++){
        totales[i] = 0;
        for (int j = 0; j < 12; j++) {
            totales[i] += ventas[i][j];
        }
    }
    cout << "El total de ventas por sucursal es:\n";
    for (int i = 0; i < N; i++) {
        cout << "Sucursal " << i + 1 << ": " << totales[i] << "\n";
    }
    cout <<endl;
    int maximo = totales[0];// Encontrar la sucursal que más ha vendido
    int indiceMaximo = 0;
    for (int i = 1; i < N; i++) {
        if (totales[i] > maximo) {
            maximo = totales[i];
            indiceMaximo = i;
        }
    }
    //sucursal que más ha vendido
    cout << "La sucursal que más ha vendido es: " << indiceMaximo + 1 << "\n";
    cout << "El monto vendido es: " << maximo << "\n\n";
     int minimo = totales[0]; // almacena
     int indiceMinimo = 0;
     for (int i = 1; i < N; i++) {
         if (totales[i] < minimo) {
             minimo = totales[i];
             indiceMinimo = i;
         }
     }
     cout << "La sucursal que menos ha vendido es: " << indiceMinimo + 1 << "\n";
     cout << "El monto vendido es: " << minimo << "\n\n";

     return 0;
}
