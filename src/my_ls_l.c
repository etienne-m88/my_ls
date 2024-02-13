/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** my_ls_l
*/
#include "../include/my.h"

struct stat info;
struct dirent *entry;

void directory(void)
{
    if (S_ISDIR(info.st_mode)) {
        my_putchar('d');
    } else {
        my_putchar('-');
    }
}

void print_permission(void)
{
    my_putstr(info.st_mode & S_IRUSR ? "r" : "-");
    my_putstr(info.st_mode & S_IWUSR ? "w" : "-");
    my_putstr(info.st_mode & S_IXUSR ? "x" : "-");
    my_putstr(info.st_mode & S_IRGRP ? "r" : "-");
    my_putstr(info.st_mode & S_IWGRP ? "w" : "-");
    my_putstr(info.st_mode & S_IXGRP ? "x" : "-");
    my_putstr(info.st_mode & S_IROTH ? "r" : "-");
    my_putstr(info.st_mode & S_IWOTH ? "w" : "-");
    my_putstr(info.st_mode & S_IXOTH ? "x" : "-");
}

void print(char *filepath)
{
    if (stat(filepath, &info) == -1) {
        exit(84);
    }
    stat(entry->d_name, &info);
    directory();
    print_permission();
    information();
}

void list_segments_l(char *filepath)
{
    DIR *dir = opendir(filepath);
    char path[1024];

    if (stat(filepath, &info) == -1) {
        exit(84);
    }
    if (dir == NULL) {
        exit(84);
    }
    entry = readdir(dir);
    while (entry != NULL) {
        if (entry->d_name[0] != '.') {
            my_strcpy(path, filepath);
            my_strcat(path, "/");
            my_strcat(path, entry->d_name);
            print(path);
        }
        entry = readdir(dir);
    }
    closedir(dir);
}

void information(void)
{
    struct passwd *name = getpwuid(info.st_uid);
    struct group *group = getgrgid(info.st_gid);
    char *time = ctime(&info.st_mtime);

    my_putchar(' ');
    my_put_nbr(info.st_nlink);
    my_putchar(' ');
    my_putstr(group->gr_name);
    my_putchar(' ');
    my_putstr(name->pw_name);
    my_putchar(' ');
    my_put_nbr(info.st_size);
    my_putchar(' ');
    time[my_strlen(time) - 9] = '\0';
    my_putstr(&time[3]);
    my_putchar(' ');
    my_putstr(entry->d_name);
    my_putchar('\n');
}
