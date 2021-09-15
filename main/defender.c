/*
** EPITECH PROJECT, 2020
** defender
** File description:
** defender
*/

#include "my.h"
#include <unistd.h>

int main(int ac, char **av, char **env)
{
    (void) av;
    if (env[0] == NULL) {
        write_error("environement not set");
        return (84);
    }
    if (ac >= 2){
        write_error("to mutch arguments\n");
        return (84);
    }
    play_game();
    return (0);
}