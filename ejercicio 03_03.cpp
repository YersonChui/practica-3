// Fecha creación: 06/09/2023
// Fecha modificación: 07/09/2023
// Número de ejericio: 3
// Problema planteado: Generar una matriz de N x N con números al azar entre A y B, y determinar:
//• La suma de la última columna
//• El producto total de la última fila
//• Obtener el mayor valor y su posición
//• Obtener la desviación estándar de todos los elementos de la matriz
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main (){
    int N;
    double A;
    double B;
    cout<<"ingrese la dimension: ";cin>>N;
    cout<<"ingrese el rango inferior: ";cin>>A;
    cout<<"ingrese el rango superior: ";cin>>B;
    double matriz[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            double x = A+rand()/RAND_MAX*(B-A);
            matriz[i][j]=x;
        }
    }cout<<"la matriz generada es: "<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    double suma=0.0;
    for(int i=0;i<N;i++){
        suma +=matriz[i][N-1];
    }
    cout<<"la suma es: "<<suma<<endl;
    double producto=1.0;
    for(int j=0;j<N;j++){
        producto *= matriz[N-1][j];
    }
    cout<<"el producto es: "<<producto<< endl;

    double maximo= matriz [0][0];
    int filamax=0;
    int columax=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
                if(matriz[i][j]>maximo){
                    maximo = matriz[i][j];
                    filamax=i;
                    columax=j;
                }
        }
    }
    cout <<"el mayor es: "<< maximo<<endl;
    cout<<"su posicion es: "<<filamax<<" "<<columax<<endl;

    double promedio=0.0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
                promedio+=matriz[i][j];
        }
    }
    promedio/=(N*N);

    double desv=0.0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
                desv+=pow(matriz[i][j]-promedio,2);
        }
    }
    double desvi=sqrt(desv/(N*N));
    cout<<"la desviacion estandar es:  "<<desv<<endl;

    return 0;
}
