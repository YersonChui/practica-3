// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 14
// Problema planteado:Simule una elección de nuestro país Bolivia. En ello se mostrará las elecciones
#include <iostream>
using namespace std;

int main() {
    int D;
    cout << "Ingrese el numero de departamentos: ";cin >> D;
    string departamentos[D];
    cout << "Ingrese los nombres de los departamentos:\n";
    for (int i = 0; i < D; i++) {
        cout << "Departamento " << i + 1 << ": ";cin >> departamentos[i];
    }
    int N;
    cout << "Ingrese el numero de candidatos: ";cin >> N;
    string candidatos[N];
    cout << "Ingrese los nombres de los candidatos:\n";
    for (int i = 0; i < N; i++) {
        cout << "Candidato " << i + 1 << ": ";cin >> candidatos[i];
    }
    int votos[D][N];
    cout << "Ingrese la cantidad de votos por departamento y candidato:\n";
    for (int i = 0; i < D; i++) {
        cout << "Departamento " << departamentos[i] << ":\n";
        for (int j = 0; j < N; j++) {
            cout << "Candidato " << candidatos[j] << ": ";cin >> votos[i][j];
        }
        cout <<endl;
    }
    int total = 0;
    for (int i = 0; i < D; i++) {
        for (int j = 0; j < N; j++) {
            total += votos[i][j];
        }
    }
    cout << "El total de votos válidos es: " << total << "\n\n";
    int totales[N];
    for (int j = 0; j < N; j++) {
        totales[j] = 0;
        for (int i = 0; i < D; i++) {
            totales[j] += votos[i][j];
        }
    }
     cout << "El total de votos por candidato es:\n";
     for (int j = 0; j < N; j++) {
         cout << "Candidato " << candidatos[j] << ": " << totales[j] << "\n";
     }
     cout <<endl;
     //porcentaje de votos por candidato
     double porcentajes[N];
     for (int j = 0; j < N; j++) {
         porcentajes[j] = (double)totales[j] / total * 100;
     }
     cout << "El porcentaje de votos por candidato es:\n";
     for (int j = 0; j < N; j++) {
         cout << "Candidato " << candidatos[j] << ": " << porcentajes[j] << "%\n";
     }
     cout <<endl;
     // ganador
     double maximo = porcentajes[0];
     int indiceMaximo = 0;
     for (int j = 1; j < N; j++) {
         if (porcentajes[j] > maximo) {
             maximo = porcentajes[j];
             indiceMaximo = j;
         }
     }
     if (maximo > 50.0 + 1.0 / total * 100) {
         cout << "El candidato " << candidatos[indiceMaximo] << " es el ganador absoluto con el "  << maximo << "% de los votos.\n";
     }
     else {
         cout << "Ningún candidato ha logrado el 50% + 1 voto. Se debe ir a una segunda vuelta.\n";
         //segundo
         double segundoMaximo = porcentajes[0];
         int indiceSegundoMaximo = 0;
         for (int j = 0; j < N; j++) {
             if (j != indiceMaximo) {
                 if (porcentajes[j] > segundoMaximo) {
                     segundoMaximo = porcentajes[j];
                     indiceSegundoMaximo = j;
                 }
             }
         }
         cout << "Los dos candidatos más votados son:\n";
         cout << "Candidato " << candidatos[indiceMaximo] << " con el "  << maximo << "% de los votos.\n";
         cout << "Candidato " << candidatos[indiceSegundoMaximo] << " con el " << segundoMaximo << "% de los votos.\n";
     }
     return 0;
}

