/*
** EPITECH PROJECT, 2023
** revstr
** File description:
** task03
*/

char *my_revstr(char *str)
{
    int i = 0;
    int len = my_strlen(str) - 1;
    char swap;

    for (; i < len; i++) {
        swap = str[i];
        str[i] = str[len];
        str[len] = swap;
        len--;
    }
    return (str);
}
