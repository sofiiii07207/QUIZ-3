#include <iostream>
using namespace std;

int main() {
    int inventario[7] = {3, 0, 7, 2, 5, 1, 4};

    cout << "===Inventario Original===" << endl;

    for(int i = 0; i < 7; i++) {
        cout << "inventario[" << i << "] = " << inventario[i] << endl;
    }

    int objetoElegido = inventario[4];
    cout << "Objeto elegido(posicion 4): " << objetoElegido << endl;
    inventario[1] = 10;
    cout << "Modificando inventario[1] = 10" << endl;

    inventario[5] = 0;
    cout << "Modificando inventario[5] = 0" << endl;

    int suma = 0;
    for(int i = 0; i < 7; i++) {
        suma += inventario[i];
    }
    cout << "Suma total del inventario: " << suma << endl;

    int maximo = inventario[0];
    int indiceMax = 0;

    for(int i = 1; i < 7; i++) {
        if(inventario[i] > maximo) {
            maximo = inventario[i];
            indiceMax = i;
        }
    }

    cout << "Valor maximo: " << maximo << "en indice" << indiceMax << endl;

    return 0;
}
