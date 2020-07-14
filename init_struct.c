/*
** EPITECH PROJECT, 2019
** 108trigo_2018
** File description:
** init_struct
*/

#include "my.h"

trigo_t	*trigo(void)
{
    trigo_t	*t = malloc(sizeof(trigo_t));

    t->i = 0;
    t->j = 0;
    t->k = 0;
    return (t);
}
