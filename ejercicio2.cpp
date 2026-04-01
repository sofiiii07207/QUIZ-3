#include <iostream>
using namespace std;

int main() {
    int mapa[3][4] = {
        {2, 0, 5, 1},
        {3, 8, 0, 4},
        {1, 6, 7, 0}
    };

    cout << "=== Mapa Original ===" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << mapa[i][j] << "\t";
        }
        cout << endl;
    }
    mapa[0][2] = 9;
    cout << "Modificando mapa[0][2] = 9" << endl;

    mapa[2][3] = 3;
    cout << "Modificando mapa[2][3] = 3" << endl;

    cout << "=== Promedio por fila ===" << endl;
    for(int i = 0; i < 3; i++) {
        int suma = 0;
        for(int j = 0; j < 4; j++) {
            suma += mapa[i][j];
        }
        double promedio = (double)suma / 4;
        cout << "Fila " << i << ": " << promedio << endl;
    }
    int maximo = mapa[0][0];
    int filaMax = 0;
    int colMax = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(mapa[i][j] > maximo) {
                maximo = mapa[i][j];
                filaMax = i;
                colMax = j;
            }
        }
    }
    cout << "=== Maximo de la matriz ===" << endl;
    cout << "Valor maximo: " << maximo 
         << " en posicion [" << filaMax << "][" << colMax << "]" << endl;
    cout << "=== Mapa Actualizado ===" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << mapa[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
