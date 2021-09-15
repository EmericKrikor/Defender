/*
** EPITECH PROJECT, 2020
** setgamepos
** File description:
** setgamepos
*/

#include "my.h"

void setpos_in(ingame_button_t sp)
{
    sfSprite_setPosition(sp.pause_button, (sfVector2f){1730, 20});
    sfSprite_setPosition(sp.start_button, (sfVector2f){1720, 900});
    sfSprite_setPosition(sp.tabledown_button, (sfVector2f){-30, 950});
}

void setpos_ic(ingame_button_t sp)
{
    sfSprite_setScale(sp.life1, (sfVector2f){2, 2});
    sfSprite_setScale(sp.life2, (sfVector2f){2, 2});
    sfSprite_setScale(sp.life3, (sfVector2f){2, 2});
    sfSprite_setPosition(sp.life1, (sfVector2f){10, 10});
    sfSprite_setPosition(sp.life2, (sfVector2f){90, 10});
    sfSprite_setPosition(sp.life3, (sfVector2f){170, 10});
    sfSprite_setPosition(sp.tower1_icon, (sfVector2f){40, 900});
    sfSprite_setPosition(sp.tower2_icon, (sfVector2f){220, 900});
    sfSprite_setPosition(sp.tower3_icon, (sfVector2f){400, 900});
    sfSprite_setPosition(sp.tower4_icon, (sfVector2f){580, 900});
    sfSprite_setPosition(sp.spell1_icon, (sfVector2f){820, 895});
    sfSprite_setPosition(sp.spell2_icon, (sfVector2f){1020, 895});
    sfSprite_setPosition(sp.t1, (sfVector2f){-1000, -1000});
    sfSprite_setPosition(sp.t2, (sfVector2f){-1000, -1000});
    sfSprite_setPosition(sp.t3, (sfVector2f){-1000, -1000});
    sfSprite_setPosition(sp.t4, (sfVector2f){-1000, -1000});
}

void setpos_stock(ingame_button_t sp)
{
    sfSprite_setPosition(sp.price_tower1_icon, (sfVector2f){150, 1020});
    sfSprite_setPosition(sp.price_tower2_icon, (sfVector2f){330, 1020});
    sfSprite_setPosition(sp.price_tower3_icon, (sfVector2f){510, 1020});
    sfSprite_setPosition(sp.price_tower4_icon, (sfVector2f){700, 1020});
    sfSprite_setPosition(sp.price_spell1_icon, (sfVector2f){940, 1020});
    sfSprite_setPosition(sp.price_spell2_icon, (sfVector2f){1140, 1020});
}

void setpos_menu(menu_button_t sp)
{
    sfSprite_setPosition(sp.play_button, (sfVector2f){800, 400});
    sfSprite_setPosition(sp.setting_button, (sfVector2f){1080, 900});
    sfSprite_setPosition(sp.music_button, (sfVector2f){680, 900});
    sfSprite_setPosition(sp.sound_button, (sfVector2f){880, 900});
    sfSprite_setPosition(sp.ex_button, (sfVector2f){20, 20});
}