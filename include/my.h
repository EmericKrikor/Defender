/*
** EPITECH PROJECT, 2020
** my
** File description:
** my
*/

#ifndef my
#define my
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/*structur for my_defender*/
typedef struct game
{
    int width_window;
    int heigth_window;
    int state;
    int music_state;
    int lifestate;
    sfBool menu;
    sfBool loose;
    sfBool game_menus;
    sfBool play;
    sfBool set;
    sfBool exit;
    sfBool game;
    sfBool game_pause;
}game_t;

typedef struct define_sprite
{
    sfSprite *sp3;
    sfTexture *tx3;
    sfSprite *sp4;
    sfTexture *tx4;
    sfSprite *sp1;
    sfTexture *tx1;
    sfSprite *sp2;
    sfTexture *tx2;
}define_sprite_t;

typedef struct menu_button
{
    sfSprite *play_button;
    sfTexture *play_button_tx;
    sfSprite *setting_button;
    sfTexture *setting_button_tx;
    sfSprite *music_button;
    sfTexture *music_button_tx;
    sfSprite *sound_button;
    sfTexture *sound_button_tx;
    sfSprite *ex_button;
    sfTexture *ex_button_tx;
}menu_button_t;

typedef struct ingame_button
{
    sfSprite *bg_game;
    sfTexture *bg_game_tx;
    sfSprite *start_button;
    sfTexture *start_button_tx;
    sfSprite *pause_button;
    sfTexture *pause_button_tx;
    sfSprite *tabledown_button;
    sfTexture *tabledown_button_tx;
    sfSprite *life1;
    sfTexture *life1_tx;
    sfSprite *life2;
    sfTexture *life2_tx;
    sfSprite *life3;
    sfTexture *life3_tx;
    sfSprite *t1;
    sfTexture *t1_tx;
    sfSprite *t2;
    sfTexture *t2_tx;
    sfSprite *t3;
    sfTexture *t3_tx;
    sfSprite *t4;
    sfTexture *t4_tx;
    sfSprite *tower1_icon;
    sfTexture *tower1_icon_tx;
    sfSprite *tower2_icon;
    sfTexture *tower2_icon_tx;
    sfSprite *tower3_icon;
    sfTexture *tower3_icon_tx;
    sfSprite *tower4_icon;
    sfTexture *tower4_icon_tx;
    sfSprite *spell1_icon;
    sfTexture *spell1_icon_tx;
    sfSprite *spell2_icon;
    sfTexture *spell2_icon_tx;

    sfSprite *price_tower1_icon;
    sfTexture *price_tower1_icon_tx;
    sfSprite *price_tower2_icon;
    sfTexture *price_tower2_icon_tx;
    sfSprite *price_tower3_icon;
    sfTexture *price_tower3_icon_tx;
    sfSprite *price_tower4_icon;
    sfTexture *price_tower4_icon_tx;
    sfSprite *price_spell1_icon;
    sfTexture *price_spell1_icon_tx;
    sfSprite *price_spell2_icon;
    sfTexture *price_spell2_icon_tx;
    sfSprite *stock_icon;
    sfTexture *stock_icon_tx;

}ingame_button_t;

typedef struct game_button
{
    sfSprite *level_button;
    sfTexture *level_button_tx;
    sfSprite *levelnum_button;
    sfTexture *levelnum_button_tx;
    sfSprite *exit_button;
    sfTexture *exit_button_tx;
    sfSprite *table_button;
    sfTexture *table_button_tx;
}game_button_t;

typedef struct setting_button
{
    sfSprite *on_button;
    sfTexture *on_button_tx;
    sfSprite *off_button;
    sfTexture *off_button_tx;
    sfSprite *exit_button;
    sfTexture *exit_button_tx;
    sfSprite *table_button;
    sfTexture *table_button_tx;
}setting_button_t;

typedef struct player_sprite
{
    sfSprite *player_sprite;
    sfTexture *player_texture;
}player_sprite_t;

typedef struct loose_sprite
{
    sfSprite *restart_button;
    sfTexture *restart_button_tx;
    sfSprite *left_button;
    sfTexture *left_button_tx;
    sfSprite *table_button;
    sfTexture *table_button_tx;
}loose_sprite_t;
/*function for my_defender*/
sfText *text;
sfText *levels;
sfFont *font;
sfMusic *music;
sfSoundBuffer *buffer;
sfSound *sound;
sfRenderWindow *window;
game_t button_state;
game_button_t games;
loose_sprite_t loose;
ingame_button_t butgame;
define_sprite_t sprite;
player_sprite_t player;
sfTime time;
sfClock *clock;
void play_game(void);
void txt(void);
void event_loop_menu(sfRenderWindow *window, sfEvent event,
menu_button_t buttons);
void test_mouse(sfSprite *start, menu_button_t buttons, int x, int y);
sfRenderWindow *create_window(int width, int hight, int pixel);
define_sprite_t create_bg(void);
menu_button_t button(void);
game_button_t game_but(void);
ingame_button_t games_but(void);
player_sprite_t create_player_sp(void);
sfIntRect rect;
void player_annim(sfRenderWindow *window, sfIntRect rect);
sfIntRect clock_player(sfIntRect rect_player, float seconds, int size);
void lifecheck(void);
loose_sprite_t loose_but(void);
void loosemenu(sfSprite *start);
void setsp2(ingame_button_t *sp);
void settx2(ingame_button_t *sp, ingame_button_t *tx);
void butt_check(menu_button_t buttons);
void tower_check(sfSprite *start);
void generat_new_tower(sfSprite *tower);
void button_game(menu_button_t buttons);
void button_set(menu_button_t buttons);
void button_level(menu_button_t buttons);
void button_test(menu_button_t buttons);
void loose_cond(void);
void pause_cond(menu_button_t buttons);

/*function of my lib*/
void write_error(char *s);
void write_text(char *s);
long long my_strlen(char const *str);

#endif /* !my */
