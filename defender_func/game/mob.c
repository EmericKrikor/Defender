/*
** EPITECH PROJECT, 2020
** mouse test
** File description:
** mouse test
*/

#include "my.h"
#include "link.h"

void move_sprite(sfIntRect *rect, int offset, int max_value)
{
    rect->left = (rect->left + offset);
    if (rect->left >= max_value)
        rect->left = 0;
}

player_sprite_t create_player_sp(void)
{
    player_sprite_t ptx;
    player_sprite_t psp;

    ptx.player_texture = sfTexture_createFromFile(ps, NULL);
    psp.player_sprite = sfSprite_create();
    sfSprite_setTexture(psp.player_sprite, ptx.player_texture, sfTrue);
    sfSprite_setScale(psp.player_sprite, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(psp.player_sprite, (sfVector2f){-60, 525});
    return (psp);
}

void player_annim(sfRenderWindow *window, sfIntRect rect)
{

    sfSprite_setTextureRect(player.player_sprite, rect);
    sfRenderWindow_drawSprite(window, player.player_sprite, NULL);
    sfSprite_move(player.player_sprite, (sfVector2f){10, 0});
}

sfIntRect clock_player(sfIntRect rect_player, float seconds, int size)
{
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.22) {
        move_sprite(&rect_player, 292, size);
        sfClock_restart(clock);
    }
    return (rect_player);
}
