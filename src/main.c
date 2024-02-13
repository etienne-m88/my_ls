/*
** EPITECH PROJECT, 2024
** my_ls
** File description:
** main
*/
#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac == 1) {
        list_segments(".");
        return (0);
    }
    if (condition_list_segments(ac, av) == 0)
        return (0);
    if (my_strcmp(av[1], "-l") == 0 && av[2] == NULL) {
        list_segments_l(".");
        return (0);
    } else if (my_strcmp(av[1], "-l") == 0 && av[2] != NULL) {
        list_segments_l(av[2]);
        return (0);
    } else
        list_segments(av[1]);
    return (0);
}

int condition_list_segments(int ac, char **av)
{
    if (my_strcmp(av[1], "-a") == 0 && av[2] == NULL) {
        list_segments_a(".");
        return (0);
    } else if (my_strcmp(av[1], "-a") == 0 && av[2] != NULL) {
        list_segments_a(av[2]);
        return (0);
    }
    if (my_strcmp(av[1], "-d") == 0 && av[2] == NULL) {
        list_segments_d(".");
        return (0);
    } else if (my_strcmp(av[1], "-d") == 0 && av[2] != NULL) {
        list_segments_d(av[2]);
        return (0);
    }
}
