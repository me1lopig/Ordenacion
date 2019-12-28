// Quick_Sort.cpp :
// ordenamienoo quicksort
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



void intercambio(float &x, float &y)
{
    // las variables se pasan por referencia

    float aux; // declaracion de variable auxliar

    aux = x;// guaardamos la variable x
    x = y; // pasamos la y a la x
    y = aux; // pasamos la x a la y

}


void Quicksort(float array[], int primero, int ultimo)
{
    
    int i = primero;
    int j=ultimo; // iteradores de la parte izquiera y derecha

    int central = (primero + ultimo)/2;
    float pivote = array[central];

    do 
    {

        while (array[i] < pivote) { i++; }
        while (array[j] > pivote) { j--; }

        if (i <= j)
        {
            intercambio(array[i],array[j]);
            i++;
            j--;
        }

    } while (i <= j);
  
    if (primero < j)
    {
        Quicksort(array, primero, j); // ordenamos la sublista izquierda
    }

    if (i < ultimo)
    {
        Quicksort(array, i, ultimo); // ordenamos la sublista derecha
    }
}


int main()
{
   
    float arreglo[] = {1,9,-8,4,5,4,0,-5,12}; // arrego a ordenar
    int long_v = sizeof(arreglo) / sizeof(*arreglo); // nº de elementos del arreglo


       // visualizacion del vector inicial
    cout << "Vector inicial " << endl;
    imprimir(arreglo, long_v); // impresion del vector inicial



    // ordenado e impresion
    Quicksort(arreglo, 0,long_v-1);
    cout << "Vector ordenado " << endl;
    imprimir(arreglo, long_v); // impresion del vector ordenado


    // parada de teclado
    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;

}

