/*
** EPITECH PROJECT, 2020
** play_game
** File description:
** play_game
*/

#include "my.h"
#include "defender.h"

void tower_effect(player_sprite_t *player, ingame_button_t *butgame)
{
    sfVector2f pos = sfSprite_getPosition(player->player_sprite);
    sfVector2f t3 = sfSprite_getPosition(butgame->t3);
    sfVector2f t4 = sfSprite_getPosition(butgame->t4);

    if (pos.x >= t3.x - 50 && pos.x <= t3.x + 50 && t3.x > 0)
        sfSprite_setColor(player->player_sprite, sfGreen);
    if (pos.x >= t3.x + 500 && t3.x > 0) {
        sfSprite_setPosition(player->player_sprite, (sfVector2f){0, 525});
        sfSprite_setScale(player->player_sprite, (sfVector2f){0.5, 0.5});
        sfSprite_setColor(player->player_sprite, sfWhite);
    } if (pos.x >= t4.x - 50 && pos.x <= t4.x + 50 && t4.x > 0)
        sfSprite_setColor(player->player_sprite, sfBlue);
    if (pos.x >= t4.x + 100 && t4.x > 0) {
        sfSprite_setPosition(player->player_sprite, (sfVector2f){0, 525});
        sfSprite_setScale(player->player_sprite, (sfVector2f){0.5, 0.5});
        sfSprite_setColor(player->player_sprite, sfWhite);
    }
}

void check_hit(player_sprite_t *player, ingame_button_t *butgame)
{
    sfVector2f pos = sfSprite_getPosition(player->player_sprite);
    sfVector2f t1 = sfSprite_getPosition(butgame->t1);
    sfVector2f t2 = sfSprite_getPosition(butgame->t2);

    if (pos.x >= t1.x - 50 && pos.x <= t1.x + 50) {
        sfSprite_setScale(player->player_sprite, (sfVector2f){0.1, 0.1});
        sfSprite_setPosition(player->player_sprite, (sfVector2f){pos.x, 600});
        sfSprite_setColor(player->player_sprite, sfWhite);
    } if (pos.x >= t2.x - 50 && t2.x > 0)
        sfSprite_setColor(player->player_sprite, sfRed);
    if (t2.x > 0 && pos.x >= t2.x + 500) {
        sfSprite_setPosition(player->player_sprite, (sfVector2f){0, 525});
        sfSprite_setScale(player->player_sprite, (sfVector2f){0.5, 0.5});
        sfSprite_setColor(player->player_sprite, sfWhite);
    }
    tower_effect(player, butgame);
}

void check_button_state(game_t *button_state)
{
    if (button_state->lifestate == 0) {
        sfSprite_setPosition(butgame.t1, (sfVector2f){-1000, -1000});
        sfSprite_setPosition(butgame.t2, (sfVector2f){-1000, -1000});
        sfSprite_setPosition(butgame.t3, (sfVector2f){-1000, -1000});
        sfSprite_setPosition(butgame.t4, (sfVector2f){-1000, -1000});
        button_state->game = sfFalse;
        button_state->loose = sfTrue;
        button_state->lifestate = 3;
    }
}

void init_display(menu_button_t buttons)
{
    sfRenderWindow_clear(window, sfBlack);
    if (button_state.menu == sfTrue ) {
        menustate(buttons);
    } if (button_state.game_menus == sfTrue) {
        if (button_state.play == sfTrue)
            play_level();
        else if (button_state.set == sfTrue) {
            sfRenderWindow_drawSprite(window, sprite.sp1, NULL);
            sfRenderWindow_drawSprite(window, buttons.ex_button, NULL);
        }
    } if (button_state.game == sfTrue)
        gamestate();
    pause_cond(buttons);
    loose_cond();
}

void play_game(void)
{
    sfEvent event;
    menu_button_t buttons = button();
    sfIntRect rect_start = {0, 0, 248, 292};
    float seconds = 0;
    initfunc();

    while (sfRenderWindow_isOpen(window)) {
        event_loop_menu(window, event, buttons);
        rect_start = clock_player(rect_start, seconds, 5840);
        rect = rect_start;
        init_display(buttons);
        sfRenderWindow_display(window);
    }
    destroy();
}