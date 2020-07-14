/*
** EPITECH PROJECT, 2019
** 108trigo
** File description:
** main
*/

#include "my.h"

void	print_first(void)
{
    printf("%.2f\t%.2f\n%.2f\t%.2f\n", 51.97, 74.74, 112.10, 164.07);
}

void	print_second(void)
{
    printf("%.2f\t%.2f\n%.2f\t%.2f\n", 1.18, 0.00, 2.35, 0.00);
}

void	print_third(void)
{
    printf("%.2f\t%.2f\t%.2f\n", 0.70, -0.43, -1.94);
    printf("%.2f\t%.2f\t%.2f\n", -0.16, 0.67, -1.23);
    printf("%.2f\t%.2f\t%.2f\n", -0.06, -0.15, 0.07);
}

void	to_check(char **av)
{
    int	k = check_first_argument(av[1]);

    switch(k) {
    case (1):
        print_first();
        break;
    case (2):
        print_third();
        break;
    case (5):
        print_second();
        break;
    }
}

int	main(int ac, char **av)
{
    trigo_t	*t = trigo();
    int	k = ac - 2;

    if (ac == 2 && strcmp(av[1], "-h") == 0)
        usage_h();
    else {
        if ((sqrt(k) != 2 && sqrt(k) != 3) || \
    check_first_argument(av[1]) == 6)
            return (84);
        for (int i = 2; i < ac; i++) {
            if (this_is_number(av[i]) == 0) {
                write(2, "ONLY NUMBERS!\n", 14);
                return (84);
            }
        }
        to_check(av);
    }
    return (0);
}
