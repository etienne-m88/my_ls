/*
** EPITECH PROJECT, 2023
** swap
** File description:
** task01
*/

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
    c = *a;
}
