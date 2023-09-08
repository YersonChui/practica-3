// Fecha creación: 06/09/2023
// Fecha modificación: 07/09/2023
// Número de ejericio: 7
// Problema planteado: Efectuar la suma de una matriz tridimensional de orden n x n x n
#include <iostream>
#include <ctime>
using namespace std;
void genmatriz(int matriz[][10][10], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                matriz[i][j][k] = rand() % 100 + 1;
            }
        }
    }
}
void impmatriz(int matriz[][10][10], int n) {
    for (int i = 0; i < n; i++) {
        cout << "---------------------\n";
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << matriz[i][j][k] << " ";
            }
            cout << "\n";
        }
    }
}
int suma_matriz(int matriz[][10][10], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                suma += matriz[i][j][k];
            }
        }
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz entre 1 y 10: ";
    cin >> n;
    while (n < 1 || n > 10) {
        cout << "Tamaño inválido. Ingrese otro valor: ";
        cin >> n;
    }
    int matriz[10][10][10];
    genmatriz(matriz, n);
    impmatriz(matriz, n);
    int suma = suma_matriz(matriz, n);
    cout << "La suma de la matriz es: " << suma << "\n";
    return 0;
}
