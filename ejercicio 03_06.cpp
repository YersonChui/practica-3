// Fecha creación: 06/09/2023
// Fecha modificación: 07/09/2023
// Número de ejericio: 6
// Problema planteado: Generar una matriz NxN, que se llene con la serie de Fibonacci.
#include <iostream>
using namespace std;

void matriz_fibonacci(int N) {
    int matriz[N][N];
    int a = 0;
    int b = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = a;
            int c = a + b;
            a = b;
            b = c;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
    cout <<endl;
    }
}
int main() {

    int N = 0;
    cout<<"introduzca N: ";cin>>N;
    matriz_fibonacci(N);
    return 0;
}
