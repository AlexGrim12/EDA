// Gutiérrez Grimaldo Alejandro
#include <stdio.h>

void parte1()
{
    // matriz con 3 columnas(funcion) y 6 filas(programas)
    int matriz[6][3] = {{3, 5, 7}, {4, 3, 6}, {4, 7, 2}, {8, 10, 1}, {9, 2, 10}, {1, 3, 5}};
    printf("\tMatriz\n");
    printf("\tf1 f2 f3 \n");
    printf("\t------------\n");
    for (int i = 0; i < 6; i++)
    {
        printf("p%d\t", i + 1);
        for (int j = 0; j < 3; j++)
            printf("%d  ", matriz[i][j]);
        printf("\n");
    }

    // Calcular la cantidad de programas que utilizan 3 veces o menos la funcion 2
    int contador = 0;
    for (int i = 0; i < 6; i++)
        if (matriz[i][1] <= 3)
            contador++;
    printf("\nCantidad de programas que utilizan 3 veces o menos la funcion 2: %d\n\n", contador);

    // calcular el total de usos de la funcion 1 en todos los programas usando un ciclo for
    int total = 0;
    for (int i = 0; i < 6; i++)
        total += matriz[i][0];
    printf("Total de usos de la funcion 1 en todos los programas: %d\n\n", total);
}

void parte2()
{
    // Definir un array de 10 elementos enteros
    int arr[10] = {9, 10, 4, 7, 4, 2, 7, 3, 8, 6};

    // utilizar apuntadores para calcular el promedio del array y mostrar el resultado
    int *p = arr;
    int suma = 0;

    for (int i = 0; i < 10; i++)
    {
        suma += *p;
        p++;
    }
    printf("Promedio del array: %d\n", suma / 10);
}

int main()
{
    parte1();
    parte2();
    return 0;
}
