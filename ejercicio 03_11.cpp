// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 11
// Problema planteado: Realizar el típico juego del 3 en raya, donde habrá dos jugadores que tengan que hacer el 3 en raya, los signos serán el X y el O, cuando haya una posición vacía habrá un – El tablero de juego, será una matriz de 3×3 de char.
//El juego termina cuando uno de los jugadores hace 3 en raya o si no hay más posiciones que poner.
#include <iostream>
#include <ctime>
using namespace std;

const char SIMBOLO_X = 'X';
const char SIMBOLO_O = 'O';
const char SIMBOLO_VACIO = '-';
const int FILAS = 3;
const int COLUMNAS = 3;

int main() {
    srand(time(NULL));
    char tablero[FILAS][COLUMNAS];
    int numero = 1;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            tablero[i][j] = numero + '0';
            numero++;
        }
    }

    int turnos = 0;
    char jugadorActual = SIMBOLO_X;
    int terminado = 0;
    while (!terminado) {
        cout << "Tablero de juego:\n\n";
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << tablero[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";

        // Pedir al jugador actual que elija una posición
        cout << "Turno del jugador " << jugadorActual << "\n";
        cout << "Elige una posición del 1 al 9: ";
        int posicion;
        cin >> posicion;
        if (posicion < 1 || posicion > 9) {
            cout << "Posición inválida. Inténtalo de nuevo.\n";
            continue;
        }
        int fila = (posicion - 1) / FILAS;
        int columna = (posicion - 1) % COLUMNAS;
        if (tablero[fila][columna] == SIMBOLO_X || tablero[fila][columna] == SIMBOLO_O) {
            cout << "Posición ocupada. Inténtalo de nuevo.\n";
            continue;
        }
        tablero[fila][columna] = jugadorActual;
        turnos++;
        int hayTresEnRaya = 0;
        for (int i = 0; i < FILAS; i++) {
            if (tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2]) {
                hayTresEnRaya = 1;
                break;
            }
        }
        for (int j = 0; j < COLUMNAS; j++) {
            if (tablero[0][j] == tablero[1][j] && tablero[1][j] == tablero[2][j]) {
                hayTresEnRaya = 1;
                break;
            }
        }
        if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]) {
            hayTresEnRaya = 1;
        }
        if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]) {
            hayTresEnRaya = 1;
        }
        if (hayTresEnRaya) {
            cout << "El jugador " << jugadorActual << " ha ganado el juego.\n";
            terminado = 1;
        }
        else if (turnos == 9) {
            cout << "El juego ha terminado en empate.\n";
            terminado = 1;
        }
        else {
            if (jugadorActual == SIMBOLO_X) {
                jugadorActual = SIMBOLO_O;
            }
            else {
                jugadorActual = SIMBOLO_X;
            }
        }
    }

    return 0;
}
