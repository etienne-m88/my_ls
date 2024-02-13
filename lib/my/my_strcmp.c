/*
** EPITECH PROJECT, 2023
** strcmp
** File description:
** task06
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    for (; s1[i] != '\0'; i++) {
        if (len1 != len2)
            return (len1 - len2);
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}
