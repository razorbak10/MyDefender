/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** menu
*/

#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void play(menust *mn)
{
    initialisaton(mn);
    boucle(mn);
    poubelle(mn);
    //affiche();
}

void initialisaton(menust *mn)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfVector2f local_plays = {1050, 750};
    sfVector2f option = {1500, 0};
    sfVector2f menu = {1260, -2000};
    sfVector2f posnon = {1260, -2000};
    sfVector2f poshelp = {1350, 710};
    sfVector2f posclose = {0, 0};
    sfVector2f poshowtoplay = {0, 0};
    mn->tclose = sfTexture_createFromFile("image/close.png", NULL);
    mn->tnon = sfTexture_createFromFile("image/non.png", NULL);
    mn->window = sfRenderWindow_create(mode, "Defender",sfClose, NULL);
    mn->texture = sfTexture_createFromFile("image/menu.png", NULL);
    mn->tboutonplay = sfTexture_createFromFile("image/bouton.jpg", NULL);
    mn->tboutonoption = sfTexture_createFromFile("image/boutonmenu.png", NULL);
    mn->tmenu = sfTexture_createFromFile("image/presquefini.png", NULL);
    mn->tboutonhelp = sfTexture_createFromFile("image/HelpButton.png", NULL);
    mn->thowtoplay = sfTexture_createFromFile("image/howtoplay.png", NULL);
    mn->sprnon = sfSprite_create();
    mn->sprite = sfSprite_create();
    mn->sprclose = sfSprite_create();
    mn->boutonplay = sfSprite_create();
    mn->boutonoption = sfSprite_create();
    mn->sprmenu = sfSprite_create();
    mn->howtoplay = sfSprite_create();
    mn->buttonhelp = sfSprite_create();
    sfRenderWindow_setIcon(mn->window,51,52,
    sfImage_getPixelsPtr(sfImage_createFromFile("image/icon.png")));
    sfSprite_setTexture(mn->boutonoption, mn->tboutonoption, sfTrue);
    sfSprite_setPosition(mn->boutonoption, option);
    sfSprite_setTexture(mn->boutonplay, mn->tboutonplay,sfTrue);
    sfSprite_setPosition(mn->boutonplay,local_plays);
    sfSprite_setTexture(mn->sprite, mn->texture, sfTrue);
    sfSprite_setPosition(mn->sprmenu,menu);
    sfSprite_setTexture(mn->sprmenu, mn->tmenu, sfTrue);
    sfSprite_setPosition(mn->sprnon,posnon);
    sfSprite_setTexture(mn->sprnon, mn->tnon, sfTrue);
    sfSprite_setPosition(mn->sprclose,posclose);
    sfSprite_setTexture(mn->sprclose, mn->tclose, sfTrue);
    sfSprite_setTexture(mn->buttonhelp, mn->tboutonhelp, sfTrue);
    sfSprite_setPosition(mn->buttonhelp, poshelp);
    sfSprite_setTexture(mn->howtoplay, mn->thowtoplay, sfTrue);
    sfSprite_setPosition(mn->howtoplay, poshowtoplay);
    mn->music = sfMusic_createFromFile("sound/soundmenu.ogg");
    //sfMusic_setLoop(mn->music, sfTrue);
    sfMusic_play(mn->music);
}

void boucle(menust *mn)
{
    sfVector2f local_plays = {1050, 750};
    sfVector2f option = {1500, 0};
    sfVector2f menu = {1260, 85};
    sfVector2f menu2 = {1260, -2000};
    sfVector2f posnon = {1440, 264};
    sfVector2f posnon2 = {1260, -2000};
    sfVector2f posclose = {0, 0};
    sfVector2f poshowtoplay = {0, 0};
    sfEvent event;
    sfVector2i mouse;
    int optionpush = 0;
    int optionferm = 0;
    int oui = 0;
    int non = 0;
    int play = 1;
    int help = 0;
    //sfWindow_setFramerateLimit(mn->window,70);

    while (sfRenderWindow_isOpen(mn->window)) {
        sfVector2i position = sfMouse_getPositionRenderWindow(mn->window);
        position.x = (float)position.x;
        position.y = (float)position.y;
        if (optionpush == 1)
        {
          if (menu.y <= 85){
            menu.y += 3;
            optionferm = 0;
            }
            sfSprite_setPosition(mn->sprmenu, menu);

        }
        if (optionferm == 1)
        {
            if (menu.y >= -2000) {
                menu.y += -3;
                optionpush = 0;
            }
            if (posnon2.y >= -2000){
                posnon2.y += -3;
                oui = 0;
            }
            sfSprite_setPosition(mn->sprnon, posnon2);
            sfSprite_setPosition(mn->sprmenu, menu2);
        }
        if (oui == 1)
        {
            if (posnon.y <= 264) {
                posnon.y += 3;
                non = 0;
            }
            sfSprite_setPosition(mn->sprnon, posnon);
        }
        if (non == 1) {
            if (posnon2.y >= -2000) {
                posnon2.y += -3;
                oui = 0;
            }
            sfSprite_setPosition(mn->sprnon, posnon2);
        }

        while (sfRenderWindow_pollEvent(mn->window, &event))
        {
            if (event.type == sfEvtClosed) { // close the game using window's button
                sfRenderWindow_close(mn->window);
            }
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                printf("x : %i\ny : %i\n", position.x, position.y);
            }
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                if (position.x >= posclose.x && position.x <= posclose.x + 150 && position.y >= posclose.y && position.y <= posclose.y + 150) {
                sfRenderWindow_close(mn->window);
                }
            }
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                if (position.x >= 1414 && position.x <= 1414 + 182 && position.y >= 762 && position.y <= 762 + 103) {
                    help = 1;
                }
                if (help == 1) {
                sfRenderWindow_drawSprite(mn->window, mn->howtoplay, NULL);
                }
            }
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                //printf("x : %i\ny : %i\n", position.x, position.y);
                if (position.x >= local_plays.x && position.x <= local_plays.x + 258 && position.y >= local_plays.y && position.y <= local_plays.y +127) {
                    sfRenderWindow_close(mn->window);
                    sfMusic_stop(mn->music);
                    Defender();
                }
            }
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                if (position.x >= option.x && position.x <= option.x + 423 && position.y >= option.y && position.y <= option.y + 86) {
                    optionpush = 1;
                }
            }
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                if (position.x >= 1870 && position.x <= 1870 + 42 && position.y >= 99 && position.y <= 99 + 36) {
                    optionferm = 1;
                }
            }
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                if (position.x >= 1442 && position.x <= 1442 + 296 && position.y >= 272 && position.y <= 272 + 51) {
                    oui = 1;
                    sfMusic_stop(mn->music);

                }
            }
            if (sfMouse_isButtonPressed(sfMouseRight)) {
                if (position.x >= 1442 && position.x <= 1442 + 296 && position.y >= 272 && position.y <= 272 + 51) {
                    non = 1;
                    sfMusic_play(mn->music);

                }
            }
            sfRenderWindow_display(mn->window);
            sfRenderWindow_drawSprite(mn->window, mn->sprite, NULL);
            sfRenderWindow_drawSprite(mn->window, mn->boutonplay, NULL);
            sfRenderWindow_drawSprite(mn->window, mn->buttonhelp, NULL);
            sfRenderWindow_drawSprite(mn->window, mn->boutonoption, NULL);
            sfRenderWindow_drawSprite(mn->window, mn->sprmenu, NULL);
            sfRenderWindow_drawSprite(mn->window, mn->sprnon, NULL);
            sfRenderWindow_drawSprite(mn->window, mn->sprclose,NULL);
        }
    }
}
void poubelle(menust *mn)
{
    sfMusic_destroy(mn->music);
    sfTexture_destroy(mn->tboutonplay);
    sfTexture_destroy(mn->tboutonhelp);
    sfSprite_destroy(mn->boutonplay);
    sfSprite_destroy(mn->buttonhelp);
    sfSprite_destroy(mn->howtoplay);
    sfTexture_destroy(mn->tboutonoption);
    sfSprite_destroy(mn->boutonoption);
    sfSprite_destroy(mn->sprmenu);
    sfSprite_destroy(mn->sprnon);
    sfSprite_destroy(mn->sprclose);
    sfTexture_destroy(mn->texture);
    sfTexture_destroy(mn->tmenu);
    sfTexture_destroy(mn->tnon);
    sfTexture_destroy(mn->tclose);
    sfTexture_destroy(mn->thowtoplay);
    sfSprite_destroy(mn->sprite);
    sfRenderWindow_destroy(mn->window);
}

int main(int ac, char **av)
{
    menust *mn = malloc(sizeof(menust));
    play(mn);
}
