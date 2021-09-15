/*
** EPITECH PROJECT, 2020
** gamestate
** File description:
** gamestate
*/

#include "defender.h"
#include "my.h"

void play_level(void)
{
    sfRenderWindow_drawSprite(window, sprite.sp1, NULL);
    sfRenderWindow_drawSprite(window, games.table_button, NULL);
    sfRenderWindow_drawSprite(window, games.level_button, NULL);
    sfRenderWindow_drawSprite(window, games.exit_button, NULL);
    sfRenderWindow_drawSprite(window, games.levelnum_button, NULL);
    sfRenderWindow_drawText(window, levels, NULL);
}

void initfunc(void)
{
    button_state.lifestate = 3;
    sprite = create_bg();
    player = create_player_sp();
    clock = sfClock_create();
    loose = loose_but();
    window = create_window(1920, 1080, 64);
    games = game_but();
    butgame = games_but();
    txt();
    button_state.menu = sfTrue;
}

void gamestate(void)
{
    sfRenderWindow_drawSprite(window, sprite.sp2, NULL);
    sfRenderWindow_drawSprite(window, butgame.t1, NULL);
    sfRenderWindow_drawSprite(window, butgame.t2, NULL);
    sfRenderWindow_drawSprite(window, butgame.t3, NULL);
    sfRenderWindow_drawSprite(window, butgame.t4, NULL);
    player_annim(window, rect);
    sfRenderWindow_drawSprite(window, butgame.pause_button, NULL);
    sfRenderWindow_drawSprite(window, butgame.tabledown_button, NULL);
    sfRenderWindow_drawSprite(window, butgame.start_button, NULL);
    if (sfSprite_getPosition(player.player_sprite).x == 1920) {
        button_state.lifestate -= 1;
        sfSprite_setScale(player.player_sprite, (sfVector2f){0.5, 0.5});
        sfSprite_setPosition(player.player_sprite, (sfVector2f){-60, 525});
    }
    check_hit(&player, &butgame);
    check_button_state(&button_state);
    lifecheck();
    drawgame();
}

void menustate(menu_button_t buttons)
{
    sfSprite_setPosition(buttons.ex_button, (sfVector2f){20, 20});
    sfText_setString(text, "Medieval Defender");
    sfText_setCharacterSize(text, 100);
    sfText_setPosition(text, (sfVector2f){400, 250});
    sfRenderWindow_drawSprite(window, sprite.sp1, NULL);
    sfRenderWindow_drawSprite(window, buttons.play_button, NULL);
    sfRenderWindow_drawSprite(window, buttons.setting_button, NULL);
    sfRenderWindow_drawSprite(window, buttons.music_button, NULL);
    sfRenderWindow_drawSprite(window, buttons.sound_button, NULL);
    sfRenderWindow_drawSprite(window, buttons.ex_button, NULL);
    sfRenderWindow_drawText(window, text, NULL);
}