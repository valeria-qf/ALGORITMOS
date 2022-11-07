#include <iostream>
using namespace std;

int main()
{
    /*Implementar um algoritmo bublesort para ordenar um vetor de 1 milhão de elementos.*/

    int V[1000000];
    int i, j, aux, total = 1000000;

    for (int i = 0; total - 1; i++)
    {
         for (int j = 0; total - i - j; j++)
        {
            V[i] = rand();
            if (V[i] > V[i+1])
            {
                // swap
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
            }
        }
    }

    return 0;
}

//  1.094 s
