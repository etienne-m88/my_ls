/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** my_ls_d
*/
#include "../include/my.h"

void list_segments_d(char *filepath)
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
        if (my_strcmp(entry->d_name, ".") == 0) {
            my_putstr(entry->d_name);
            my_putstr("\n");
            loop_condition3();
        }
        entry = readdir(dir);
    }
    closedir(dir);
}

void loop_condition3(void)
{
    struct dirent *entry;

    if (entry == NULL) {
        write(2, "Opening error\n", 14);
        exit(84);
    }
}
