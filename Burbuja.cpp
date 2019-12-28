// Burbuja.cpp : 
// ejemplo de ordenacion mediante el metodo de la burbuja


#include <iostream>


using namespace std;


void imprimir(int vector[],int size)
{
  // imprime un vector

    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "]=" << vector[i] << endl;
    }
}


int main()
{
    
    int numeros[] = {4,1,2,3,5,15,-8}; // lista a ordenar 
    int aux; // variable para realizar el intercambio
    int long_v = sizeof(numeros) / sizeof(*numeros); // tamaño del vector a ordenar


    // inpresion del vector inicial 
    cout << "Vector inicial" << endl;
    imprimir(numeros,long_v);


    // metodo burbuja

    for (int i = 0; i < long_v; i++)
    {
        for (int j = 0; j < long_v; j++)
        {

            if (numeros[j] < numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }

        }
    }


    // impresion del vector ordenado ascendente

    cout << "\nVector ordenado descendente" << endl;
    imprimir(numeros,long_v);

// las impresiones se pueden realizar con una función

    // parada de teclado
    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;


}

