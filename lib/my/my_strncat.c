/*
** EPITECH PROJECT, 2023
** strncat
** File description:
** lib/my
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    char *p = dest;

    for (; *p != '\0'; p++) {
    }
    for (; *src != '\0' && nb > 0;) {
        *p = *src;
        *p++;
        *src++;
        nb--;
    }
    *p = '\0';
    return (dest);
}
