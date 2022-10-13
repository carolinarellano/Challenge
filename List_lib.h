//
// Created by Arlyn Linette Medina García on 11/10/22.
//

#ifndef EXAMENEXTRAAULICO_LIST_LIB_H
#define EXAMENEXTRAAULICO_LIST_LIB_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct list List;

List* new_list();
int to_int_lol(List *head);
void print_list(List *l);
List* get_elements_from_file(List *s, FILE* file);

#endif //EXAMENEXTRAAULICO_LIST_LIB_H
