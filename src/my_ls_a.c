/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** my_ls
*/
#include "../include/my.h"

int list_segments_a(char *filepath)
{
    struct dirent *entry;
    DIR *dir = opendir(filepath);

    if (dir == NULL) {
        write(2, "Not a directory\n", 17);
        exit(84);
    }
    entry = readdir(dir);
    while (entry != NULL) {
        my_putstr(entry->d_name);
        my_putstr("\n");
        loop_condition2(entry);
        entry = readdir(dir);
    }
    closedir(dir);
    return (0);
}

void loop_condition2(struct dirent *entry)
{
    if (entry == NULL) {
        write(2, "Opening error\n", 14);
        exit(84);
    }
}
