//
// Created by Arlyn Linette Medina García on 11/10/22.
//

#include "List_lib.h"

typedef struct node{
    //Funciona en base a strings
    char value[100];
    struct node *next;
}Node;

struct list{
    Node *head;
};

char str[50];
char buffer[255];

//Crea una lista
List* new_list(){
    //Crea una lista nueva todavia sin elementos
    List *new = malloc(sizeof(List));
    new->head = NULL;
    return new;
}

Node *new_node(char val[100]) {
    //Crea nodos por cada elemento que se le pasa
    Node *new = malloc(sizeof(Node));
    //Copia el valor del buffer en el nuevo nodo como string para poder manipularlo
    strcpy(new->value, val);
    new->next = NULL;
    return new;
}

//lee los elementos del archivo y los agrega a la lista en diferentes nodos
List* get_elements_from_file(List *l, FILE* file)
{
    //Recorre el elemento de cada linea de input.txt
    while(fgets(buffer,100,file) !=NULL)
    {
        //Cuando la lista todavia no tiene ningun elemento
        if (l->head == NULL)
        {
            //Hace que no tome en cuenta el salto de linea
            buffer[strcspn(buffer, "\n")] = 0;
            l->head = new_node(buffer);
        }
        //Cuando la lista ya tiene por lo menos un head
        else
        {
            Node *curr = l->head;
            //Recorre los nodos hasta encontrar NULL para agregar otro nodo con el valor correspondiente
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            buffer[strcspn(buffer, "\n")] = 0;
            curr->next = new_node(buffer);
        }
    }
    //Regresa la lista con los nodos que contienen los valores correspondientes del archivo de texto
    return l;
}

//Hace la funcion de contatenar los elementos en un string, lo convierte en entero para sumarle 1.
int to_int_lol(List *l)
{
    //Agrega los elementos de los diferentes nodos en un string
    Node *curr = l->head;
    while (curr != NULL)
    {
        strcat(str,curr->value);
        curr = curr->next;
    }

    //Convierte el string a numero entero.
    int number = atoi(str);

    //Suma 1 al numero y lo devuelve
    number+=1;
    return number;
}

//Imprime la lista con los nodos correspondientes
void print_list(List *l)
{
    Node *curr = l->head;
    while (curr != NULL)
    {
        printf("[%s]->", curr->value);
        curr = curr->next;
    }
}