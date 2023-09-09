// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 8
// Problema planteado: Multiplique dos matrices una de N x M y la otra de M x N
#include <iostream>
#include <ctime>
using namespace std;
int main (){
int N;
int M;
cout<<"ingrese el valor N ";cin>>N;
cout<<"ingrese el valor M ";cin>>M;
int A[N][M]; // Primera matriz
int B[M][N]; // Segunda matriz
int C[N][N]; // Matriz resultado

  srand(time(NULL));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      A[i][j] = rand() % 10;
    }
  }
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      B[i][j] = rand() % 10;
    }
  }
  cout << "Matriz A:" << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Matriz B:" << endl;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cout << B[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      C[i][j] = 0;
      for (int k = 0; k < M; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  cout << "Matriz C:" << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
