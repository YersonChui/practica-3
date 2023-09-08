// Fecha creación: 06/09/2023
// Fecha modificación: 07/09/2023
// Número de ejericio: 5
// Problema planteado: Generar la matriz para un orden NxN
#include <iostream>
using namespace std;

int main() {
  int N = 4;
  int matriz[N][N];
  int valor = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      matriz[i][j] = valor;
      valor++ ;
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
