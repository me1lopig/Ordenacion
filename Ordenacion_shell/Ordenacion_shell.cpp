// Ordenacion_shell.cpp 
// algoritmo de ordenacion shell
//

#include <iostream>

using namespace std;

void imprimir(float vector[], int size)
{
    // imprime un vector

    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "]=" << vector[i] << endl;
    }
}



void intercambio(float &x,float &y)
{
    // las variables se pasan por referencia

    float aux; // declaracion de variable auxliar

    aux = x;// guaardamos la variable x
    x = y; // pasamos la y a la x
    y = aux; // pasamos la x a la y

}


void ordenacion_Shell(float vector[], int n)
{
    // vector -> array a ordenar
    // n-> numero de datos del arreglo

    int salto = n / 2; //salto
    int i, j, k; // iteradores

    while (salto > 0)
    {
        for (i = salto; i < n; i++)
        {
            j = i - salto;
            while (j >= 0)
            {
                k = j + salto;
                if (vector[j] <= vector[k]) // par de elmentos ordenados
                {
                    j = -1;
                }
                else
                {
                    // elementos desodenados
                    intercambio(vector[j], vector[k]); // funcion de intercambio
                    j -= salto;
                }
            }
        }
        salto = salto / 2;
    }
}




int main()
{
    // funccion para implementer el metodo de ordendacion shell

    float arreglo[] = { 1,9,-8,4,5,4,0,-5 }; // arrego a ordenar
    int long_v = sizeof(arreglo) / sizeof(*arreglo); // longitud del arreglo


    // visualizacion del vector inicial
    cout << "Vector inicial " << endl;
    imprimir(arreglo, long_v); // impresion del vector inicial

    // ordenado e impresion
    ordenacion_Shell(arreglo, long_v);
    cout << "Vector ordenado " << endl;
    imprimir(arreglo, long_v); // impresion del vector ordenado


    // parada de teclado
    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;

}


