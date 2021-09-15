/*
** EPITECH PROJECT, 2020
** loose but
** File description:
** loose but
*/

#include "my.h"
#include "link.h"

void loosemenu(sfSprite *start)
{
    if (start == loose.restart_button) {
        button_state.loose = sfFalse;
        button_state.game = sfTrue;
    } if (start == loose.left_button) {
        button_state.loose = sfFalse;
        button_state.game_menus = sfTrue;
    }
    if (start == loose.restart_button && button_state.game_pause == sfTrue) {
        sfSprite_setPosition(player.player_sprite, (sfVector2f){-60, 525});
        sfSprite_setPosition(butgame.t1, (sfVector2f){-200, 0});
        sfSprite_setPosition(butgame.t2, (sfVector2f){-200, 0});
        sfSprite_setPosition(butgame.t3, (sfVector2f){-200, 0});
        sfSprite_setPosition(butgame.t4, (sfVector2f){-200, 0});
        button_state.lifestate = 3;
        button_state.game_pause = sfFalse;
        button_state.game = sfTrue;
    } if (start == loose.left_button && button_state.game_pause == sfTrue) {
        button_state.game_pause = sfFalse;
        button_state.game_menus = sfTrue;
    }
}

loose_sprite_t txr(loose_sprite_t tx)
{
    tx.restart_button_tx = sfTexture_createFromFile(rest, NULL);
    tx.left_button_tx = sfTexture_createFromFile(me, NULL);
    tx.table_button_tx = sfTexture_createFromFile(tbl, NULL);
    return (tx);
}

loose_sprite_t spr(loose_sprite_t sp)
{
    sp.restart_button = sfSprite_create();
    sp.left_button = sfSprite_create();
    sp.table_button = sfSprite_create();
    return (sp);
}

loose_sprite_t loose_but(void)
{
    loose_sprite_t sp = spr(sp);
    loose_sprite_t tx = txr(tx);

    sfSprite_setTexture(sp.restart_button, tx.restart_button_tx, sfTrue);
    sfSprite_setTexture(sp.left_button, tx.left_button_tx, sfTrue);
    sfSprite_setTexture(sp.table_button, tx.table_button_tx, sfTrue);
    sfSprite_setPosition(sp.restart_button, (sfVector2f){1050, 680});
    sfSprite_setPosition(sp.left_button, (sfVector2f){710, 680});
    sfSprite_setPosition(sp.table_button, (sfVector2f){650, 150});
    return (sp);
}