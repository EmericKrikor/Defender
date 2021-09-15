/*
** EPITECH PROJECT, 2020
** event
** File description:
** event
*/

#include "my.h"

void button_game(menu_button_t buttons)
{
    if (button_state.game == sfTrue) {
        test_mouse(butgame.pause_button, buttons, 176, 175);
        test_mouse(butgame.start_button, buttons, 176, 175);
        test_mouse(butgame.tower1_icon, buttons, 171, 170);
        test_mouse(butgame.tower2_icon, buttons, 171, 170);
        test_mouse(butgame.tower3_icon, buttons, 171, 170);
        test_mouse(butgame.tower4_icon, buttons, 171, 170);
    } if (button_state.loose == sfTrue) {
        test_mouse(loose.left_button, buttons, 176, 175);
        test_mouse(loose.restart_button, buttons, 176, 175);
    } if (button_state.game_pause == sfTrue) {
        test_mouse(loose.left_button, buttons, 176, 175);
        test_mouse(loose.restart_button, buttons, 176, 175);
        test_mouse(buttons.ex_button, buttons, 103, 104);
    }
}

void button_set(menu_button_t buttons)
{
    test_mouse(buttons.ex_button, buttons, 103, 104);
}

void button_level(menu_button_t buttons)
{
    test_mouse(games.exit_button, buttons, 103, 104);
    test_mouse(games.level_button, buttons, 176, 175);
}

void button_test(menu_button_t buttons)
{
    test_mouse(buttons.play_button, buttons, 331, 329);
    test_mouse(buttons.setting_button, buttons, 176, 175);
    test_mouse(buttons.music_button, buttons, 176, 175);
    test_mouse(buttons.sound_button, buttons, 176, 175);
    test_mouse(buttons.ex_button, buttons, 103, 104);
}

void event_loop_menu(sfRenderWindow *window, sfEvent event,
menu_button_t buttons)
{
    button_state.exit = sfKeyboard_isKeyPressed(sfKeyEscape);
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        } if (event.type == sfEvtMouseButtonPressed)
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                butt_check(buttons);
            }
}