/*
** EPITECH PROJECT, 2019
** 108trigo_2018
** File description:
** check
*/

#include "my.h"

int	check_first_argument(char *str)
{
    char	*k = NULL;
    int	y = 0;

    if (strcmp(str, "EXP") == 0)
        return (1);
    else if (strcmp(str, "COS") == 0)
        return (2);
    else if (strcmp(str, "SIN") == 0)
        return (3);
    else if (strcmp(str, "COSH") == 0)
        return (4);
    else if (strcmp(str, "SINH") == 0)
        return (5);
    else
        return (6);
}
