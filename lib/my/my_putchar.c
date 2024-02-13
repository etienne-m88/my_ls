/*
** EPITECH PROJECT, 2023
** putchar
** File description:
** all task
*/
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}
