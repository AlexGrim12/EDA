#include <stdio.h>

int main()
{
    int flag = 0, par[10], cinc[10], sum[10], *apPar = &par[0], *apCinc = &cinc[0], *apSum = &sum[0];

    // primer array
    // printf("Ingrese los valores pares: \n");
    // for (int i = 0; i < 10; i++)
    // {
    //     do
    //     {
    //         printf("[%d]: ", i + 1);
    //         scanf("%d", apPar + i);
    //         if (*(apPar + i) % 2 != 0)
    //             printf("Valor invalido, vuelva a ingresarlo\n");
    //         else
    //             flag = 1;
    //     } while (flag == 0);
    //     flag = 0;
    // }
    // printf("\n");
    

    // segundo array
    printf("Ingrese los valores multiplos de cinco: \n");
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("[%d]: ", i + 1);
            scanf("%d", apCinc + i);
            if (*(apCinc + i) % 5 != 0)
                printf("Valor invalido, vuelva a ingresarlo\n");
            else
                flag = 1;
        } while (flag == 0);
        flag = 0;
    }
    printf("\n");

    // suma de los arrays anteriores
    for (int i = 0; i < 10; i++)
    {
        *(apSum + i) = *(apPar + i) + *(apCinc + i);
    }

    // mostrar los arrays
    // primer array
    printf("\t\t\t\t.:Primer array:.\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(apPar + i));
    }
    printf("\n\n\n");

    // segundo array
    printf("\t\t\t\t.:Segundo array:.\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(apCinc + i));
    }
    printf("\n\n\n");

    // tercer array
    printf("\t\t\t     .:Suma de los arrays:.\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(apSum + i));
    }

    return 0;
}
