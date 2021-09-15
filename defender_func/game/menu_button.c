/*
** EPITECH PROJECT, 2020
** menu button
** File description:
** menu button
*/

#include "my.h"
#include "link.h"
#include "defender.h"

void setpos(ingame_button_t sp)
{
    setpos_in(sp);
    setpos_ic(sp);
    setpos_stock(sp);
}

ingame_button_t games_but(void)
{
    ingame_button_t tx;
    ingame_button_t sp;
    tx = setuptx(tx);
    sp = setupsp(sp);
    settxtosp(sp, tx);
    setpos(sp);
    return (sp);
}

setting_button_t set_but(void)
{
    setting_button_t tx;
    setting_button_t sp;

    tx.on_button_tx = sfTexture_createFromFile(bt_l, NULL);
    sp.on_button = sfSprite_create();
    tx.off_button_tx = sfTexture_createFromFile(bt_l, NULL);
    sp.off_button = sfSprite_create();
    tx.exit_button_tx = sfTexture_createFromFile(bt_ex, NULL);
    sp.exit_button = sfSprite_create();
    tx.table_button_tx = sfTexture_createFromFile(bt_ta, NULL);
    sp.table_button = sfSprite_create();
    sfSprite_setTexture(sp.on_button, tx.on_button_tx, sfTrue);
    sfSprite_setTexture(sp.exit_button, tx.exit_button_tx, sfTrue);
    sfSprite_setTexture(sp.table_button, tx.table_button_tx, sfTrue);
    sfSprite_setTexture(sp.off_button, tx.off_button_tx, sfTrue);
    setposset(sp);

    return (sp);
}

game_button_t game_but(void)
{
    game_button_t tx;
    game_button_t sp;

    tx.level_button_tx = sfTexture_createFromFile(bt_l, NULL);
    sp.level_button = sfSprite_create();
    tx.levelnum_button_tx = sfTexture_createFromFile(bt_n1, NULL);
    sp.levelnum_button = sfSprite_create();
    tx.exit_button_tx = sfTexture_createFromFile(bt_ex, NULL);
    sp.exit_button = sfSprite_create();
    tx.table_button_tx = sfTexture_createFromFile(bt_ta, NULL);
    sp.table_button = sfSprite_create();
    sfSprite_setTexture(sp.level_button, tx.level_button_tx, sfTrue);
    sfSprite_setTexture(sp.levelnum_button, tx.levelnum_button_tx, sfTrue);
    sfSprite_setTexture(sp.exit_button, tx.exit_button_tx, sfTrue);
    sfSprite_setTexture(sp.table_button, tx.table_button_tx, sfTrue);
    sfSprite_setPosition(sp.level_button, (sfVector2f){550, 350});
    sfSprite_setPosition(sp.levelnum_button, (sfVector2f){620, 410});
    sfSprite_setPosition(sp.exit_button, (sfVector2f){1325, 230});
    sfSprite_setPosition(sp.table_button, (sfVector2f){500, 200});
    return (sp);
}

menu_button_t button(void)
{
    menu_button_t tx;
    menu_button_t sp;

    tx.play_button_tx = sfTexture_createFromFile(bt_p, NULL);
    sp.play_button = sfSprite_create();
    tx.ex_button_tx = sfTexture_createFromFile(bt_ex, NULL);
    sp.ex_button = sfSprite_create();
    tx.setting_button_tx = sfTexture_createFromFile(bt_set, NULL);
    sp.setting_button = sfSprite_create();
    tx.music_button_tx = sfTexture_createFromFile(bt_s, NULL);
    sp.music_button = sfSprite_create();
    tx.sound_button_tx = sfTexture_createFromFile(bt_m, NULL);
    sp.sound_button = sfSprite_create();
    sfSprite_setTexture(sp.play_button, tx.play_button_tx, sfTrue);
    sfSprite_setTexture(sp.setting_button, tx.setting_button_tx, sfTrue);
    sfSprite_setTexture(sp.music_button, tx.music_button_tx, sfTrue);
    sfSprite_setTexture(sp.sound_button, tx.sound_button_tx, sfTrue);
    sfSprite_setTexture(sp.ex_button, tx.ex_button_tx, sfTrue);
    setpos_menu(sp);
    return (sp);
}