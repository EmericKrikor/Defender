/*
** EPITECH PROJECT, 2020
** defender
** File description:
** defender
*/

#ifndef defender
#define defender

#include "my.h"

void setpos_in(ingame_button_t sp);
void setpos_ic(ingame_button_t sp);
void setpos_stock(ingame_button_t sp);
void setpos_menu(menu_button_t sp);
void settxtosp(ingame_button_t sp, ingame_button_t tx);
ingame_button_t setupsp(ingame_button_t sp);
void setposset(setting_button_t sp);
void gamestate(void);
void menustate(menu_button_t buttons);
ingame_button_t setuptx(ingame_button_t tx);
void state_menu(sfSprite *start, menu_button_t buttons);
void condmenu(sfSprite *start, menu_button_t buttons);
void drawgame(void);
void initfunc(void);
void destroy(void);
void play_level(void);
void check_button_state(game_t *button_state);
void check_hit(player_sprite_t *player, ingame_button_t *butgame);
void state_check(sfSprite *start, menu_button_t buttons);

#endif /* !defender */
