/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** my_strlen
*/

#include "my.h"

long long my_strlen(char const *str)
{
    long long i = 0;

    for (i++; str[i] != '\0'; i++);
    return (i);
}
