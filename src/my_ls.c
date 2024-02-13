/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** my_ls
*/
#include "../include/my.h"

void list_segments(char *filepath)
{
    struct dirent *entry;
    struct stat info;
    DIR *dir = opendir(filepath);

    if (dir == NULL) {
        write(2, "Not a directory\n", 17);
        exit(84);
    }
    entry = readdir(dir);
    while (entry != NULL) {
        if (entry->d_name[0] != '.') {
            my_putstr(entry->d_name);
            my_putstr("\n");
            loop_condition();
        }
        entry = readdir(dir);
    }
    closedir(dir);
}

void loop_condition(void)
{
    struct dirent *entry;

    if (entry == NULL) {
        write(2, "Openning error\n", 16);
        exit(84);
    }
}
