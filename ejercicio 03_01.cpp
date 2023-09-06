// Fecha creación: 06/09/2023
// Fecha modificación: 06/09/2023
// Número de ejericio: 1
// Problema planteado: Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 porla fina n.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Ingrese el valor de n: ";cin>>n;
    int matriz[n][n];
    for (int i=0; i<n; i++) { //Recorre las filas
        for (int j=0; j<n; j++) { //Recorre las columnas
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";cin >> matriz[i][j];
        }
    }
    int aux[n]; //auxiliar
    for (int j=0;j<n; j++) {
        aux[j] = matriz[0][j];
    }
    for (int j = 0; j < n; j++) {
        matriz[0][j] = matriz[n-1][j];
    }
    for (int j = 0; j < n; j++) {
        matriz[n-1][j] = aux[j];
    }
    cout << "El arreglo modificado es: "<<endl;
    for (int i = 0; i < n; i++) { //filas
        for (int j = 0; j < n; j++) { //columnas
            cout << matriz[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}
