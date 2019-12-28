// Seleccion.cpp 
// aplicacion del metodo de ordenacion mediante seleccion
//

#include <iostream>


using namespace std;


int main()
{
    int datos[] = {4,2,3,0,1,5}; // arreglo desordenado
    int long_v = sizeof(datos) / sizeof(*datos); // longitud del vector
    int min;

    for (int i = 0; i<long_v; i++)
    {   
        min = 2147483647; // mayor entero 

        for (int j = i; j < long_v; j++)
        {
           // cout << datos[j] << endl;
            if (datos[j] < min)
            {
                min = datos[j];
                datos[j] = datos[i];
                datos[i] = min;
            }

        }
        cout << "el minimo es " << min << endl;
        cout << endl;
    }

// imprimir el contenido del arreglo ordenado

    for (int i = 0; i < long_v; i++)
    {
        cout<< "[" << i << "]=" << datos[i] << endl;
    }


    // parada
    cout << "Pulsa una tecla" << endl;
    cin.get();

}


