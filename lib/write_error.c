/*
** EPITECH PROJECT, 2020
** write_error
** File description:
** write_error
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

void write_error(char *s)
{
    write(2, s, my_strlen(s));
}

void write_text(char *s)
{
    write(1, s, my_strlen(s));
}