/*
** EPITECH PROJECT, 2020
** window
** File description:
** window
*/

#include "my.h"

sfRenderWindow *create_window(int width, int hight, int pixel)
{
    sfRenderWindow *window;
    sfVideoMode video;

    video.height = hight;
    video.width = width;
    video.bitsPerPixel = pixel;
    video = sfVideoMode_getDesktopMode();
    window = sfRenderWindow_create(video, "My_Defender",
    sfResize | sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}