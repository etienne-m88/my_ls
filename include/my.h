/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** task02
*/
#pragma once
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <stdarg.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int condition(int i, const char *format, va_list list);
int my_printf(const char *format, ...);
unsigned int my_put_nbr_binary(unsigned int nb);
unsigned int my_put_nbr_deci(unsigned int nb);
unsigned int my_put_nbr_hexa(unsigned int nb);
unsigned int my_put_nbr_octal(unsigned int nb);
unsigned int my_put_nbr_hexa2(unsigned int nb);
void *my_put_nbr_pointeur(void *nb);
int my_put_nbr_float(double nb);
void my_print_prc(va_list list);
void my_print_i(va_list list);
void my_print_d(va_list list);
void my_print_c(va_list list);
void my_print_s(va_list list);
void my_print_o(va_list list);
void my_print_u(va_list list);
void my_print_x(va_list list);
void my_print_large_x(va_list list);
void my_print_binary(va_list list);
void my_print_f(va_list list);
void my_print_p(va_list list);
void list_segments(char *filepath);
int list_segments_a(char *filepath);
void print_permission(void);
void list_segments_l(char *filepath);
void list_segments_d(char *filepath);
void loop_condition(void);
void information(void);
void print(char *filepath);
void directory(void);
void loop_condition2(struct dirent *entry);
void loop_condition3(void);
int condition_ls(char **av, int i);
int condition_list_segments(int ac, char **av);
