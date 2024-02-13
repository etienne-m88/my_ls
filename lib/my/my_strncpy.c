/*
** EPITECH PROJECT, 2023
** strncpy
** File description:
** task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n; i++) {
        dest[i] = src[i];
    }
    return (dest);
}
