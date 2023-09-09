// Fecha creación: 06/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 2
// Problema planteado: espiral
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el orden de la matriz espiral (n x n): ";cin >> n;
    int matriz[20][20];
    int valor = 1;  // Valor inicial para llenar la matriz
    int minFila = 0, maxFila = n - 1;  // Límites de filas
    int minColumna = 0, maxColumna = n - 1;  // Límites de columnas

    while (valor <= n * n) {
        for (int i = minColumna; i <= maxColumna; ++i) {
            matriz[minFila][i] = valor++;
        }
        minFila++;
        for (int i = minFila; i <= maxFila; ++i) {
            matriz[i][maxColumna] = valor++;
        }
        maxColumna--;
        for (int i = maxColumna; i >= minColumna; --i) {
            matriz[maxFila][i] = valor++;
        }
        maxFila--;
        for (int i = maxFila; i >= minFila; --i) {
            matriz[i][minColumna] = valor++;
        }
        minColumna++;
    }
    cout << "Matriz espiral generada:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
