/*
** EPITECH PROJECT, 2019
** 108trigo
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <math.h>

typedef	struct	trigo
{
    int	i;
    int	j;
    int	k;
}	trigo_t;

void	usage_h(void);
trigo_t	*trigo(void);
int	check_first_argument(char *str);
int	this_is_number(char *str);

#endif /* MY_H_ */
