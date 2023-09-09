// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 10
// Problema planteado: Traspones una matriz de N x M
#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cout << "Ingrese el valor de N: ";cin >> N;
    cout << "Ingrese el valor de M: ";cin >> M;
    int A[N][M];
    int B[M][N];
    cout << "Ingrese los elementos de la matriz A de " << N << " x " << M << ":" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "La matriz A es:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            B[j][i] = A[i][j];
        }
    }
    cout << "La matriz transpuesta B es:" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


