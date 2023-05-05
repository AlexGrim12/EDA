// Gutiérrez Grimaldo Alejandro
#include <stdio.h>

// definir una estructura llamada Programa que contenga idprog, descProg
struct Programa
{
    int idprog;
    char descProg[20];
};

int main()
{
    // definir un array llamado listaProg para 4 programas con los datos mostrados
    struct Programa listaProg[4] = {{11, "Captura"}, {13, "Bajas"}, {16, "Reporte"}, {18, "Consulta"}};

    // mostrar los datos de los programas
    printf("Programas\n");
    for (int i = 0; i < 4; i++)
        printf("%d %s\n", listaProg[i].idprog, listaProg[i].descProg);

    // modificar el nombre "Reporte por "ReporteNew"
    listaProg[2].descProg[7] = 'N';
    listaProg[2].descProg[8] = 'e';
    listaProg[2].descProg[9] = 'w';

    // mostrar los datos de los programas
    printf("\nProgramas con el nombre de ReporteNew\n");
    for (int i = 0; i < 4; i++)
        printf("%d %s\n", listaProg[i].idprog, listaProg[i].descProg);

    return 0;
}
