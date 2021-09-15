/*
** EPITECH PROJECT, 2020
** define_text
** File description:
** define texture
*/

#include "my.h"
#include "link.h"

void destroy(void)
{
    sfMusic_destroy(music);
    sfSoundBuffer_destroy(buffer);
    sfSound_destroy(sound);
    sfRenderWindow_destroy(window);
}

define_sprite_t create_bg(void)
{
    define_sprite_t tx;
    define_sprite_t sp;

    tx.tx1 = sfTexture_createFromFile(bg, NULL);
    sp.sp1 = sfSprite_create();
    tx.tx2 = sfTexture_createFromFile(bg2, NULL);
    sp.sp2 = sfSprite_create();
    sfSprite_setTexture(sp.sp1, tx.tx1, sfTrue);
    sfSprite_setTexture(sp.sp2, tx.tx2, sfTrue);

    return (sp);
}

void txt(void)
{
    buffer = sfSoundBuffer_createFromFile("assets/music/click.ogg");
    sound  = sfSound_create();
    sfSound_setBuffer(sound, buffer);
    text = sfText_create();
    levels = sfText_create();
    font = sfFont_createFromFile("assets/fonts/medieval.ttf");
    sfText_setFont(text, font);
    sfText_setFont(levels, font);
    sfText_setString(text, "Medieval Defender");
    sfText_setString(levels, "Levels");
    sfText_setCharacterSize(text, 100);
    sfText_setCharacterSize(levels, 70);
    sfText_setPosition(text, (sfVector2f){400, 250});
    sfText_setPosition(levels, (sfVector2f){860, 230});
    music = sfMusic_createFromFile("assets/music/Music.ogg");
    sfMusic_play(music);
    sfMusic_setLoop(music, 1);
}