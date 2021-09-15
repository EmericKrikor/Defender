/*
** EPITECH PROJECT, 2020
** settexturetosprite
** File description:
** set
*/

#include "my.h"
#include "link.h"

void setposset(setting_button_t sp)
{
    sfSprite_setPosition(sp.on_button, (sfVector2f){550, 350});
    sfSprite_setPosition(sp.off_button, (sfVector2f){550, 350});
    sfSprite_setPosition(sp.exit_button, (sfVector2f){1325, 230});
    sfSprite_setPosition(sp.table_button, (sfVector2f){500, 200});
}

void settxtosp(ingame_button_t sp, ingame_button_t tx)
{
    sfSprite_setTexture(sp.t1, tx.t1_tx, sfTrue);
    sfSprite_setTexture(sp.t2, tx.t2_tx, sfTrue);
    sfSprite_setTexture(sp.t3, tx.t3_tx, sfTrue);
    sfSprite_setTexture(sp.t4, tx.t4_tx, sfTrue);
    sfSprite_setTexture(sp.pause_button, tx.pause_button_tx, sfTrue);
    sfSprite_setTexture(sp.life1, tx.life1_tx, sfTrue);
    sfSprite_setTexture(sp.life2, tx.life2_tx, sfTrue);
    sfSprite_setTexture(sp.life3, tx.life3_tx, sfTrue);
    sfSprite_setTexture(sp.start_button, tx.start_button_tx, sfTrue);
    sfSprite_setTexture(sp.tabledown_button, tx.tabledown_button_tx, sfTrue);
    sfSprite_setTexture(sp.tower1_icon, tx.tower1_icon_tx, sfTrue);
    sfSprite_setTexture(sp.tower2_icon, tx.tower2_icon_tx, sfTrue);
    sfSprite_setTexture(sp.tower3_icon, tx.tower3_icon_tx, sfTrue);
    sfSprite_setTexture(sp.tower4_icon, tx.tower4_icon_tx, sfTrue);
    sfSprite_setTexture(sp.spell1_icon, tx.spell1_icon_tx, sfTrue);
    sfSprite_setTexture(sp.spell2_icon, tx.spell2_icon_tx, sfTrue);
    settx2(&sp, &tx);
}

ingame_button_t setupsp(ingame_button_t sp)
{
    sp.t4 = sfSprite_create();
    sp.t3 = sfSprite_create();
    sp.t2 = sfSprite_create();
    sp.t1 = sfSprite_create();
    sp.pause_button = sfSprite_create();
    sp.life1 = sfSprite_create();
    sp.life2 = sfSprite_create();
    sp.life3 = sfSprite_create();
    sp.start_button = sfSprite_create();
    sp.tabledown_button = sfSprite_create();
    sp.tower1_icon = sfSprite_create();
    sp.tower2_icon = sfSprite_create();
    sp.tower3_icon = sfSprite_create();
    sp.tower4_icon = sfSprite_create();
    sp.spell1_icon = sfSprite_create();
    sp.spell2_icon = sfSprite_create();
    setsp2(&sp);
    return (sp);
}

ingame_button_t next_tx(ingame_button_t tx)
{
    tx.tower4_icon_tx = sfTexture_createFromFile(tw4, NULL);
    tx.spell1_icon_tx = sfTexture_createFromFile(spl1, NULL);
    tx.spell2_icon_tx = sfTexture_createFromFile(spl2, NULL);
    tx.price_tower1_icon_tx = sfTexture_createFromFile(stc1, NULL);
    tx.price_tower2_icon_tx = sfTexture_createFromFile(stc1, NULL);
    tx.price_tower3_icon_tx = sfTexture_createFromFile(stc1, NULL);
    tx.price_tower4_icon_tx = sfTexture_createFromFile(stc1, NULL);
    tx.price_spell1_icon_tx = sfTexture_createFromFile(stc1, NULL);
    tx.price_spell2_icon_tx = sfTexture_createFromFile(stc1, NULL);
    return (tx);
}

ingame_button_t setuptx(ingame_button_t tx)
{
    tx.t4_tx = sfTexture_createFromFile(T4, NULL);
    tx.t3_tx = sfTexture_createFromFile(T3, NULL);
    tx.t2_tx = sfTexture_createFromFile(T2, NULL);
    tx.t1_tx = sfTexture_createFromFile(T1, NULL);
    tx.pause_button_tx = sfTexture_createFromFile(bt_pa, NULL);
    tx.life1_tx = sfTexture_createFromFile(heart, NULL);
    tx.life2_tx = sfTexture_createFromFile(heart, NULL);
    tx.life3_tx = sfTexture_createFromFile(heart, NULL);
    tx.start_button_tx = sfTexture_createFromFile(bt_bs, NULL);
    tx.tabledown_button_tx = sfTexture_createFromFile(bt_tb, NULL);
    tx.tower1_icon_tx = sfTexture_createFromFile(tw1, NULL);
    tx.tower2_icon_tx = sfTexture_createFromFile(tw2, NULL);
    tx.tower3_icon_tx = sfTexture_createFromFile(tw3, NULL);
    tx = next_tx(tx);
    return (tx);
}