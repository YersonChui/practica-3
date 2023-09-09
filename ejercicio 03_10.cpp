// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 10
// Problema planteado: Traspones una matriz de N x M
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int sexo[10];
    int trabaja[10];
    int sueldo[10];
    cout << "Encuesta a 10 personas:\n\n";
    for (int i = 0; i < 10; i++) {
        sexo[i] = rand() % 2 + 1;
        trabaja[i] = rand() % 2 + 1;
        if (trabaja[i] == 1) {
            sueldo[i] = rand() % 1401 + 600;
        }
        else {
            sueldo[i] = 0;
        }
        cout << "Persona " << i + 1 << ":\n";
        cout << "Sexo: ";
        if (sexo[i] == 1) {
            cout << "Masculino\n";
        }
        else {
            cout << "Femenino\n";
        }
        cout << "Trabaja: ";
        if (trabaja[i] == 1) {
            cout << "Si\n";
        }
        else {
            cout << "No\n";
        }
        cout << "Sueldo: " << sueldo[i] << "\n\n";
    }
    int hombres = 0;
    int mujeres = 0;
    int hombresTrabajan = 0;
    int mujeresTrabajan = 0;
    int sumaSueldosHombres = 0;
    int sumaSueldosMujeres = 0;
    for (int i = 0; i < 10; i++) {
        if (sexo[i] == 1) {
            hombres++;
            if (trabaja[i] == 1) {
                hombresTrabajan++;
                sumaSueldosHombres += sueldo[i];
            }
        }
        else {
            mujeres++;
            if (trabaja[i] == 1) {
                mujeresTrabajan++;
                sumaSueldosMujeres += sueldo[i];
            }
        }
    }
    double porcentajeHombres = (double)hombres / 10 * 100;
    double porcentajeMujeres = (double)mujeres / 10 * 100;
    double porcentajeHombresTrabajan = (double)hombresTrabajan / hombres * 100;
    double porcentajeMujeresTrabajan = (double)mujeresTrabajan / mujeres * 100;
    double promedioSueldosHombres = (double)sumaSueldosHombres / hombresTrabajan;
    double promedioSueldosMujeres = (double)sumaSueldosMujeres / mujeresTrabajan;
    // resultados
    cout << "Resultados de la encuesta:\n\n";
    cout << "Porcentaje de hombres: "  << porcentajeHombres << "%\n";
    cout << "Porcentaje de mujeres: "  << porcentajeMujeres << "%\n";
    cout << "Porcentaje de hombres que trabajan: " << porcentajeHombresTrabajan << "%\n";
    cout << "Porcentaje de mujeres que trabajan: " << porcentajeMujeresTrabajan << "%\n";
    cout << "El sueldo promedio de los hombres que trabajan: "  << promedioSueldosHombres << "\n";
    cout << "El sueldo promedio de las mujeres que trabajan: " << promedioSueldosMujeres << "\n";
    return 0;
}
