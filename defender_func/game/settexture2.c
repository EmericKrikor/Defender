/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** settexture2.c
*/

#include "my.h"

void settx2(ingame_button_t *sp, ingame_button_t *tx)
{
    sfSprite_setTexture(sp->price_tower1_icon,
        tx->price_tower1_icon_tx, sfTrue);
    sfSprite_setTexture(sp->price_tower2_icon,
        tx->price_tower2_icon_tx, sfTrue);
    sfSprite_setTexture(sp->price_tower3_icon,
        tx->price_tower3_icon_tx, sfTrue);
    sfSprite_setTexture(sp->price_tower4_icon,
        tx->price_tower4_icon_tx, sfTrue);
    sfSprite_setTexture(sp->price_spell1_icon,
        tx->price_spell1_icon_tx, sfTrue);
    sfSprite_setTexture(sp->price_spell2_icon,
        tx->price_spell2_icon_tx, sfTrue);
}

void setsp2(ingame_button_t *sp)
{
    sp->price_tower1_icon = sfSprite_create();
    sp->price_tower2_icon = sfSprite_create();
    sp->price_tower3_icon = sfSprite_create();
    sp->price_tower4_icon = sfSprite_create();
    sp->price_spell1_icon = sfSprite_create();
    sp->price_spell2_icon = sfSprite_create();
}