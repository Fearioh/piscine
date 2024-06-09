#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

// Calculer la taille de la liste
static int ft_list_size2(t_list *begin_list) {
    int count = 0;
    t_list *ptr = begin_list;
    while (ptr) {
        count++;
        ptr = ptr->next;
    }
    return count;
}

// Accéder à l'élément à l'index donné
static int ft_list_at2(t_list *begin_list, int nbr) {
    t_list *ptr = begin_list;
    int i = 0;
    while (i < nbr && ptr != NULL) {
        ptr = ptr->next;
        i++;
    }
    if (ptr != NULL) {
        return ptr->data;
    } else {
        return -1; // Valeur d'erreur
    }
}

// Inverser la liste chaînée
void ft_list_reverse_fun(t_list *begin_list) {
    if (begin_list == NULL) {
        return;
    }

    int size = ft_list_size2(begin_list);
    int i = 0;
    int tmp;

    while (i < size / 2) {
        tmp = ft_list_at2(begin_list, i);
        fill_list_at(begin_list, i, ft_list_at2(begin_list, size - i - 1));
        fill_list_at(begin_list, size - i - 1, tmp);
        i++;
    }
}
