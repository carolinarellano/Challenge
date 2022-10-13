#include <stdio.h>
#include "List_lib.h"

int main(int argc, char *argv[])
{
    //Abre el file input.txt en modo read
    FILE *input = fopen(argv[1], "r");
    //Abre el file result.txt en modo write
    FILE *output = fopen(argv[2], "w");
    //Crea una nueva lista
    List *l = new_list();
    //Realiza la funcion de contatenar, primero leyendo los elementos de input
    int num = to_int_lol(get_elements_from_file(l,input));
    //Imprimer el entero en el archivo result.txt
    fprintf(output, "%d", num);
    //Cierra los archivos previemante abiertos
    fclose(output);
    fclose(input);

    return 0;
}



