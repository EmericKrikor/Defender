/*
** EPITECH PROJECT, 2020
** test_mouse
** File description:
** find where is the mouse
*/

#include "my.h"
#include "link.h"
#include "defender.h"

void generat_new_tower(sfSprite *tower)
{
    sfVector2i posdrop = sfMouse_getPositionRenderWindow(window);

    sfSprite_setPosition(tower,
        (sfVector2f){posdrop.x - 88, posdrop.y - 88});
    gamestate();
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfTransparent);
}

void playfunc(sfSprite *start, menu_button_t buttons)
{
    state_menu(start, buttons);
    condmenu(start, buttons);
    loosemenu(start);
    tower_check(start);
}

void soundfunc(sfSprite *start, menu_button_t buttons)
{
    if (start == buttons.sound_button) {
        if (button_state.state == 0 ) {
            buttons.sound_button_tx = sfTexture_createFromFile(bt_m_o, NULL);
            sfSprite_setTexture(buttons.sound_button,
            buttons.sound_button_tx, sfTrue);
            sfSound_pause(sound);
            button_state.state = 1;
        } else if (button_state.state == 1) {
            buttons.sound_button_tx = sfTexture_createFromFile(bt_m, NULL);
            sfSprite_setTexture(buttons.sound_button,
            buttons.sound_button_tx, sfTrue);
            sfSound_play(sound);
            button_state.state = 0;
        }
    } else if (button_state.state == 0 && start != butgame.start_button)
        sfSound_play(sound);
}

void musicfunc(sfSprite *start, menu_button_t buttons)
{
    if (start == buttons.music_button) {
        if (button_state.music_state == 0 ) {
            buttons.music_button_tx = sfTexture_createFromFile(bt_s_o, NULL);
            sfSprite_setTexture(buttons.music_button,
            buttons.music_button_tx, sfTrue);
            sfMusic_stop(music);
            button_state.music_state = 1;
        } else if (button_state.music_state == 1) {
            buttons.music_button_tx = sfTexture_createFromFile(bt_s, NULL);
            sfSprite_setTexture(buttons.music_button,
            buttons.music_button_tx, sfTrue);
            sfMusic_play(music);
            button_state.music_state = 0;
        }
    }
}

void test_mouse(sfSprite *start, menu_button_t buttons, int x, int y)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(window);
    sfVector2f sprite = sfSprite_getPosition(start);

    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        pos = sfMouse_getPositionRenderWindow(window);
        sprite = sfSprite_getPosition(start);
        if (pos.x - x < sprite.x && pos.y - y < sprite.y) {
            if (pos.x > sprite.x && pos.y > sprite.y) {
                playfunc(start, buttons);
                soundfunc(start, buttons);
                musicfunc(start, buttons);
            }
        }
    }
}