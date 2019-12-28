// Insercion.cpp : 
// metodo de ordenacion mediante insercion
//

#include <iostream>

using namespace std;

void imprimir(int vector[], int size)
{
    // imprime un vector

    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "]=" << vector[i] << endl;
    }
}

int main()
{

    int datos[] = {4,2,3,1,5}; // arreglo desordenado
    int pos; // variable de posicion
    int aux; // variable de intercambio
    int long_v = sizeof(datos) / sizeof(*datos); // longitud del vector


    // algoritmo de ordenamiento por insercion

    cout << "\nVector inicial" << endl;
    imprimir(datos, long_v);

    for (int i = 0; i < long_v; i++)
    {
        pos = i;
        aux = datos[i];

        while ((pos > 0) && (datos[pos - 1] > aux))
        {
            datos[pos] = datos[pos - 1];
            pos--;
        }
        datos[pos] = aux;
    }

    cout << "\nVector odenado" << endl;
    imprimir(datos, long_v);

    // parada
    cout << "\nPulsa una tecla" << endl;
    cin.get();

    return 0;

}


