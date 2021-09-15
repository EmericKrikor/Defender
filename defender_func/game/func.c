/*
** EPITECH PROJECT, 2020
** function norm
** File description:
** function norm
*/

#include "my.h"

void pause_cond(menu_button_t buttons)
{
    if (button_state.game_pause == sfTrue) {
        sfText_setString(text, "PAUSE");
        sfText_setCharacterSize(text, 50);
        sfText_setPosition(text, (sfVector2f){880, 450});
        sfSprite_setPosition(buttons.ex_button, (sfVector2f){1130, 200});
        sfRenderWindow_drawSprite(window, sprite.sp2, NULL);
        sfRenderWindow_drawSprite(window, loose.table_button, NULL);
        sfRenderWindow_drawSprite(window, buttons.ex_button, NULL);
        sfRenderWindow_drawText(window, text, NULL);
        sfRenderWindow_drawSprite(window, loose.left_button, NULL);
        sfRenderWindow_drawSprite(window, loose.restart_button, NULL);
    }
}

void loose_cond(void)
{
    if (button_state.loose == sfTrue) {
        sfText_setString(text, "YOU LOOSE !");
        sfText_setCharacterSize(text, 50);
        sfText_setPosition(text, (sfVector2f){770, 350});
        sfRenderWindow_drawSprite(window, sprite.sp2, NULL);
        sfRenderWindow_drawSprite(window, loose.table_button, NULL);
        sfRenderWindow_drawText(window, text, NULL);
        sfRenderWindow_drawSprite(window, loose.left_button, NULL);
        sfRenderWindow_drawSprite(window, loose.restart_button, NULL);
    }
}

void butt_check(menu_button_t buttons)
{
    if (button_state.menu == sfTrue)
        button_test(buttons);
    if (button_state.game_menus == sfTrue)
        button_level(buttons);
    if (button_state.set == sfTrue)
        button_set(buttons);
    if (button_state.game == sfTrue)
        button_game(buttons);
    if (button_state.game_pause == sfTrue)
        button_game(buttons);
    if (button_state.loose == sfTrue)
        button_game(buttons);
}

void tower_check(sfSprite *start)
{
    if (start == butgame.tower1_icon) {
        sfSound_pause(sound);
        while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            generat_new_tower(butgame.t1);
    } if (start == butgame.tower2_icon) {
        sfSound_pause(sound);
        while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            generat_new_tower(butgame.t2);
    } if (start == butgame.tower3_icon) {
        sfSound_pause(sound);
        while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            generat_new_tower(butgame.t3);
    } if (start == butgame.tower4_icon) {
        sfSound_pause(sound);
        while (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            generat_new_tower(butgame.t4);
    } if (start == butgame.start_button)
        sfSound_pause(sound);
}

void state_check(sfSprite *start, menu_button_t buttons)
{
    if (start == buttons.setting_button) {
        button_state.menu = sfFalse;
        button_state.game_menus = sfTrue;
        button_state.set = sfTrue;
    } if (start == buttons.play_button) {
        button_state.menu = sfFalse;
        button_state.game_menus = sfTrue;
        button_state.play = sfTrue;
    } if (start == games.exit_button) {
        button_state.game_menus = sfFalse;
        button_state.play = sfFalse;
        button_state.menu = sfTrue;
    }
}