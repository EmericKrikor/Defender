/*
** EPITECH PROJECT, 2020
** state menu
** File description:
** state menu
*/

#include "my.h"
#include "defender.h"

void state_menu(sfSprite *start, menu_button_t buttons)
{
    state_check(start, buttons);
    if (start == games.level_button) {
        sfSprite_setPosition(player.player_sprite, (sfVector2f){-60, 525});
        sfSprite_setPosition(butgame.t1, (sfVector2f){-200, 0});
        sfSprite_setPosition(butgame.t2, (sfVector2f){-200, 0});
        sfSprite_setPosition(butgame.t3, (sfVector2f){-200, 0});
        sfSprite_setPosition(butgame.t4, (sfVector2f){-200, 0});
        button_state.lifestate = 3;
        button_state.game_menus = sfFalse;
        button_state.game = sfTrue;
    }
}

void condmenu(sfSprite *start, menu_button_t buttons)
{
    if (start == buttons.ex_button && button_state.set == sfFalse
    && button_state.game_pause == sfFalse)
        sfRenderWindow_close(window);
    if (start == buttons.ex_button && button_state.set == sfTrue) {
        button_state.set = sfFalse;
        button_state.game_menus = sfFalse;
        button_state.menu = sfTrue;
    } if (start == butgame.pause_button) {
        button_state.game = sfFalse;
        button_state.game_pause = sfTrue;
    } if (button_state.game_pause == sfTrue && start == buttons.ex_button) {
        button_state.game_pause = sfFalse;
        button_state.game = sfTrue;
    }
}

void lifecheck(void)
{
    if (button_state.lifestate == 3) {
        sfRenderWindow_drawSprite(window, butgame.life1, NULL);
        sfRenderWindow_drawSprite(window, butgame.life2, NULL);
        sfRenderWindow_drawSprite(window, butgame.life3, NULL);
    }else if (button_state.lifestate == 2) {
        sfRenderWindow_drawSprite(window, butgame.life1, NULL);
        sfRenderWindow_drawSprite(window, butgame.life2, NULL);
    }else if (button_state.lifestate == 1)
        sfRenderWindow_drawSprite(window, butgame.life1, NULL);
}

void drawgame(void)
{
    sfRenderWindow_drawSprite(window, butgame.tower1_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.tower2_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.tower3_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.tower4_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.spell1_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.spell2_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.price_tower1_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.price_tower2_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.price_tower3_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.price_tower4_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.price_spell1_icon, NULL);
    sfRenderWindow_drawSprite(window, butgame.price_spell2_icon, NULL);
}