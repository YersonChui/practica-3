// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 12
// Problema planteado:Ingresa una matriz de NxN y a continuación a,b c d
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano de la matriz: ";cin >> n;
    int matriz[n][n];
    // Pedir
    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "matriz[" << i << "][" << j << "] = ";cin >> matriz[i][j];
        }
    }
    // matriz original
    cout << "La matriz original es:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout <<endl;
    }
    int fila;
    cout << "Ingrese la fila a eliminar: ";cin >> fila;
    if (fila < 0 || fila >= n) {
        cout << "Fila invalida.\n";
        return 0;
    }
    int aux[n - 1][n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (i != fila) {
            for (int j = 0; j < n; j++) {
                aux[k][j] = matriz[i][j];
            }
            k++;
        }
    }
    cout << "La matriz sin la fila " << fila << " es:\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            cout << aux[i][j] << " ";
        }
        cout << "\n";
    }
    int columna;
    cout << "Ingrese la columna a eliminar: ";cin >> columna;
    if (columna < 0 || columna >= n) {
        cout << "Columna invalida.\n";
        return 0;
    }
    //sin la columna eliminada
    int aux2[n - 1][n - 1];
    k = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (j != columna) {
                aux2[i][k] = aux[i][j];
                k++;
            }
        }
        k = 0;
    }

    // fila y columna eliminadas
    cout << "La matriz sin la fila " << fila << " y la columna " << columna << " es:\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            cout << aux2[i][j] << " ";
        }
        cout <<endl;
    }
     int valorFila;
     cout << "Ingrese el valor a insertar en una nueva fila: ";cin>> valorFila;
     int posicionFila;
     cout << "Ingrese la posición de la nueva fila: ";cin >> posicionFila;
     if (posicionFila < 0 || posicionFila > n - 1) {
         cout << "Posición invalida.\n";
         return 0;
     }
     int aux3[n][n - 1];
     k = 0;
     for (int i = 0; i < n; i++) {
         if (i == posicionFila) {
             for (int j = 0; j < n - 1; j++) {
                 aux3[i][j] = valorFila;
             }
         }
         else {
             for (int j = 0; j < n - 1; j++) {
                 aux3[i][j] = aux2[k][j];
             }
             k++;
         }
     }
     cout << "La matriz con la nueva fila " << posicionFila << " con el valor " << valorFila << " es:\n";
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n - 1; j++) {
             cout << aux3[i][j] << " ";
         }
         cout<<endl;
     }
      int valorColumna;
      cout << "Ingrese el valor a insertar en una nueva columna: ";cin >> valorColumna;
      int posicionColumna;
      cout << "Ingrese la posición de la nueva columna: ";cin >> posicionColumna;
      if (posicionColumna < 0 || posicionColumna > n - 2) {
          cout << "Posición invalida.\n";
          return 0;
      }
      int aux4[n][n];
      k = 0;
      for (int j = 0; j < n; j++) {
          if (j == posicionColumna) {
              for (int i = 0; i < n; i++) {
                  aux4[i][j] = valorColumna;
              }
          }
          else {
              for (int i = 0; i < n; i++) {
                  aux4[i][j] = aux3[i][k];
              }
              k++;
          }
      }
      cout << "La matriz con la nueva columna " << posicionColumna << " con el valor " << valorColumna << " es:\n";
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
              cout << aux4[i][j] << " ";
          }
          cout << "\n";
      }
    return 0;
}
