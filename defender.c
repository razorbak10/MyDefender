/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** defender
*/

#include "my.h"

void initiale2(defenderst *js, ennemie *en, tower *tw)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfVector2f pospause = {0,0};
    sfVector2f posdeck = {250, 925};
    sfVector2f poselixir = {760, 950};
    sfVector2f poselixir2 = {380, 1025};
    sfVector2f poselixir3 = {500, 1025};
    sfVector2f poselixir4 = {620, 1025};
    sfVector2f posnbelixir = {880, 980};
    //sfVector2f posgiant = {200, 375}; //x 905
    sfVector2f posfirstcard = {260, 934};
    sfVector2f possecondcard = {382, 934};
    sfVector2f posthirdcard = {505, 934};
    sfVector2f posfourthcard = {625, 934};
    sfVector2f posfirstelixir = {255, 1025};
    sfVector2f posfirstcost = {325, 1025};
    sfVector2f possecondcost = {440, 1025};
    sfVector2f posthirdcost = {570, 1025};
    sfVector2f posfourthcost = {690, 1025};

    js->elixirint = 10;
    tw->towertex = sfTexture_createFromFile("image/arbalete.png",NULL);
    js->font = sfFont_createFromFile("font/fontclash.ttf");
    js->window = sfRenderWindow_create(mode, "Defender",sfClose, NULL);
    js->texture = sfTexture_createFromFile("image/map_2.png", NULL);
    js->tfirstcard = sfTexture_createFromFile("image/cannon.png", NULL);
    js->tsecondcard = sfTexture_createFromFile("image/tesla.png", NULL);
    js->tthirdcard = sfTexture_createFromFile("image/wallasatire.png", NULL);
    js->tfourthcard = sfTexture_createFromFile("image/tourquifaitboum.png", NULL);
    js->tcardelixir = sfTexture_createFromFile("image/minielixir.png", NULL);
    js->tpause = sfTexture_createFromFile("image/pause.png", NULL);
    js->tdeck = sfTexture_createFromFile("image/deck.png", NULL);
    en->tennemie3 = sfTexture_createFromFile("image/giant.png", NULL);
    en->tennemie4 = sfTexture_createFromFile("image/giant2.png", NULL);
    en->tennemie2 = sfTexture_createFromFile("image/giant3.png", NULL);
    en->tennemie = sfTexture_createFromFile("image/giant0.png", NULL);
    js->telixir = sfTexture_createFromFile("image/elixir.png", NULL);

    js->tpausebanner = sfTexture_createFromFile("image/electro_dragon.png", NULL);
    js->tpausemenu = sfTexture_createFromFile("image/menupause1.png", NULL);


    js->nbelixir = sfText_create();
    js->firstcost = sfText_create();
    js->secondcost = sfText_create();
    js->thirdcost = sfText_create();
    js->fourthcost = sfText_create();

    sfText_setString(js->nbelixir, nb_tochar(js->elixirint));
    sfText_setPosition(js->nbelixir, posnbelixir);
    sfText_setFont(js->nbelixir, js->font);
    sfText_setCharacterSize(js->nbelixir, 50);
    sfText_setColor(js->nbelixir, sfWhite);

    sfText_setString(js->firstcost, "3"); // cannon
    sfText_setPosition(js->firstcost, posfirstcost);
    sfText_setFont(js->firstcost, js->font);
    sfText_setCharacterSize(js->firstcost, 50);
    sfText_setColor(js->firstcost, sfYellow);

    sfText_setString(js->secondcost, "4"); // tesla
    sfText_setPosition(js->secondcost, possecondcost);
    sfText_setFont(js->secondcost, js->font);
    sfText_setCharacterSize(js->secondcost, 50);
    sfText_setColor(js->secondcost, sfYellow);

    sfText_setString(js->thirdcost, "6"); // arc-x
    sfText_setPosition(js->thirdcost, posthirdcost);
    sfText_setFont(js->thirdcost, js->font);
    sfText_setCharacterSize(js->thirdcost, 50);
    sfText_setColor(js->thirdcost, sfYellow);

    sfText_setString(js->fourthcost, "5"); // inferno tower
    sfText_setPosition(js->fourthcost, posfourthcost);
    sfText_setFont(js->fourthcost, js->font);
    sfText_setCharacterSize(js->fourthcost, 50);
    sfText_setColor(js->fourthcost, sfYellow);

    js->sprite = sfSprite_create();
    js->elixir = sfSprite_create();
    js->elixir2 = sfSprite_create();
    js->elixir3 = sfSprite_create();
    js->elixir4 = sfSprite_create();
    en->sprennemie = sfSprite_create();
    js->deck = sfSprite_create();
    js->sprpause = sfSprite_create();
    js->firstcard = sfSprite_create();
    js->secondcard = sfSprite_create();
    js->thirdcard = sfSprite_create();
    js->fourthcard = sfSprite_create();
    js->firstelixir = sfSprite_create();
    js->secondelixir = sfSprite_create();
    js->thirdelixir = sfSprite_create();
    js->fourthelixir = sfSprite_create();
    tw->towersprite = sfSprite_create();

    js->pausebanner = sfSprite_create();
    js->pausemenu = sfSprite_create();


    sfSprite_setTexture(tw->towersprite, tw->towertex, sfTrue);
    sfSprite_setTexture(js->sprite, js->texture, sfTrue);
    sfSprite_setTexture(js->elixir, js->telixir, sfTrue);
    sfSprite_setTexture(js->elixir2, js->tcardelixir, sfTrue);
    sfSprite_setTexture(js->elixir3, js->tcardelixir, sfTrue);
    sfSprite_setTexture(js->elixir4, js->tcardelixir, sfTrue);
    sfSprite_setTexture(js->deck, js->tdeck, sfTrue);
    sfSprite_setTexture(js->firstcard, js->tfirstcard, sfTrue);
    sfSprite_setTexture(js->secondcard, js->tsecondcard, sfTrue);
    sfSprite_setTexture(js->thirdcard, js->tthirdcard, sfTrue);
    sfSprite_setTexture(js->fourthcard, js->tfourthcard, sfTrue);
    sfSprite_setTexture(js->firstelixir, js->tcardelixir, sfTrue);
    //sfSprite_setTexture(js->secondcard, js->tsecondcard, sfTrue);
    //sfSprite_setTexture(js->secondelixir, js->tcardelixir, sfTrue);
    sfSprite_setTexture(en->sprennemie, en->tennemie, sfTrue);
    sfSprite_setTexture(js->sprpause, js->tpause, sfTrue);

    sfSprite_setPosition(js->deck, posdeck);
    sfSprite_setPosition(js->firstcard, posfirstcard);
    sfSprite_setPosition(js->secondcard, possecondcard);
    sfSprite_setPosition(js->thirdcard, posthirdcard);
    sfSprite_setPosition(js->fourthcard, posfourthcard);
    sfSprite_setPosition(js->firstelixir, posfirstelixir);
    sfSprite_setPosition(js->sprpause, pospause);
    sfSprite_setPosition(en->sprennemie, en->posgiant);
    sfSprite_setPosition(js->elixir, poselixir);
    sfSprite_setPosition(js->elixir2, poselixir2);
    sfSprite_setPosition(js->elixir3, poselixir3);
    sfSprite_setPosition(js->elixir4, poselixir4);
    js->music = sfMusic_createFromFile("sound/play.ogg");
    tw->achat = sfMusic_createFromFile("sound/achat2.ogg");
    sfMusic_play(js->music);
    en->next = NULL;
    return en;
}

void initiale3(ennemie *en) {
    ennemie *tamp = en;
    int i = 110;
    for (;tamp->next != NULL; tamp = tamp->next);
    tamp->next = malloc(sizeof(ennemie));
    tamp->next->posgiant.x = i;
    tamp->next->posgiant.y = 375;
    tamp->next->tennemie = sfTexture_createFromFile("image/giant.png", NULL);
    tamp->next->sprennemie = sfSprite_create();
    sfSprite_setTexture(tamp->next->sprennemie, tamp->next->tennemie,sfTrue);
    sfSprite_setPosition(tamp->next->sprennemie, tamp->next->posgiant);
    tamp->next->next = NULL;
    i -= 500;

}

void boucle2(defenderst *js, ennemie *en, tower *tw)
{
    int closed = 0;
    int toweroui = 0;
    int push = 0;
    int pause = 0;
    sfEvent event;
    sfVector2i mouse;
    en->clockennemie = sfClock_create();
    en->clocksprenne = sfClock_create();
    ennemie *tamp = en;

    while (sfRenderWindow_isOpen(js->window)) {
        sfVector2i position = sfMouse_getPositionRenderWindow(js->window);
        position.x = (float)position.x;
        position.y = (float)position.y;
        tw->towerpose.x = position.x;
        tw->towerpose.y = position.y;
        if (en->posgiant.x <= 900) {
            en->posgiant.x = en->posgiant.x + 0.25;
        }
        else if (en->posgiant.x >= 900 && en->posgiant.y < 700) {
            en->posgiant.y = en->posgiant.y + 0.25;
        }
        else if (en->posgiant.y == 700 && en->posgiant.x <= 1650) {
            en->posgiant.x = en->posgiant.x + 0.25;
            //printf("cc\n");
        }
        else if (en->posgiant.y == 700 && en->posgiant.x >= 1650) {
            //printf("lol\n");
            en->posgiant.y = 375;
            en->posgiant.x = 200;
        }
        sfSprite_setPosition(en->sprennemie,en->posgiant);
        sfVector2f posfirstcard = {260, 934};
        sfVector2f posfirstcard2 = {260, 800};
        sfVector2f possecondcard = {382, 934};
        sfVector2f possecondcard2 = {382, 800};
        sfVector2f posthirdcard = {505, 934};
        sfVector2f posthirdcard2 = {505, 800};
        sfVector2f posfourthcard = {625, 934};
        sfVector2f posfourthcard2 = {625, 800};
        //spritext
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(en->clockennemie)) > 200) {
            sfSprite_setTexture(en->sprennemie,en->tennemie,sfTrue);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(en->clockennemie)) > 400) {
            sfSprite_setTexture(en->sprennemie,en->tennemie1,sfTrue);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(en->clockennemie)) > 600) {
            sfSprite_setTexture(en->sprennemie,en->tennemie2,sfTrue);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(en->clockennemie)) > 800) {
            sfSprite_setTexture(en->sprennemie,en->tennemie3,sfTrue);
            sfClock_restart(en->clockennemie);
        }
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(en->clocksprenne)) > 1) {
            sfClock_restart(en->clocksprenne);
        }
        while (sfRenderWindow_pollEvent(js->window, &event))
        {
            // if (js->event.type = sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape)) {
            //     sfRenderWindow_close(js->window);
            // }
            if (js->event.type = sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape)) {
                pause = 1;
            }
            if (event.type == sfEvtClosed || closed == 1) { // close game using window's button
                sfRenderWindow_close(js->window);
            }
            // if (sfMouse_isButtonPressed(sfMouseLeft)) {
            //     printf("x : %i\ny : %i\n", position.x, position.y);
            // }
            if (position.x >= 260 && position.x <= 260 + 103 && position.y >= 935 && position.y <= 935 + 137) {
                if (posfirstcard.y != 870) {
                    posfirstcard.y = posfirstcard.y - 10;
                }
                sfSprite_setPosition(js->firstcard, posfirstcard2);
            }
            else {
                if (posfirstcard.y != 934) {
                    posfirstcard.y = posfirstcard.y + 10;
                }
                sfSprite_setPosition(js->firstcard, posfirstcard);
            }
            if (position.x >= 383 && position.x <= 383 + 101 && position.y >= 939 && position.y <= 939 + 130) {
                if (possecondcard.y != 870) {
                    possecondcard.y = possecondcard.y - 10;
                }
                sfSprite_setPosition(js->secondcard, possecondcard2);
            } else {
                if (possecondcard.y != 934) {
                    possecondcard.y = possecondcard.y + 10;
                }
                sfSprite_setPosition(js->secondcard, possecondcard);
            }
            if (position.x >= 507 && position.x <= 507 + 100 && position.y >= 934 && position.y <= 934 + 136) {
                if (posthirdcard.y != 870) {
                    posthirdcard.y = posthirdcard.y - 10;
                }
                sfSprite_setPosition(js->thirdcard, posthirdcard2);
            } else {
                if (posthirdcard.y != 934) {
                    posthirdcard.y = posthirdcard.y + 10;
                }
                sfSprite_setPosition(js->thirdcard, posthirdcard);
            }
            if (position.x >= 628 && position.x <= 628 + 103 && position.y >= 938 && position.y <= 938 + 132) {
                if (posfourthcard.y != 870) {
                    posfourthcard.y = posfourthcard.y - 10;
                }
                sfSprite_setPosition(js->fourthcard, posfourthcard2);
            } else {
                if (posfourthcard.y != 934) {
                    posfourthcard.y = posfourthcard.y + 10;
                }
                sfSprite_setPosition(js->fourthcard, posfourthcard);
            }
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                if (position.x >= 510 && position.x <= 510 + 100 && position.y >= 934 && position.y <= 934 + 136 && toweroui == 0 && js->elixirint >= 6) {
                    sfMusic_play(tw->achat);
                    toweroui = 1;
                    js->elixirint = js->elixirint -2;
                    sfText_setString(js->nbelixir, nb_tochar(js->elixirint));
                    sfSprite_setPosition(tw->towersprite, tw->towerpose);
                }
                if (position.x >= 896 && position.x <= 896 + 769 && posfirstcard.y >= 830 && position.y <= 830 + 87 && toweroui == 1) {
                    sfSprite_setPosition(tw->towersprite, tw->towerpose);
                    toweroui = 0;
                }

            }
            sfMusic_pause(tw->achat);

            // try to move up the card when the mouse is on it
        }
        while (pause == 1) {
            sfVector2i position = sfMouse_getPositionRenderWindow(js->window);
            position.x = (float)position.x;
            position.y = (float)position.y;
            sfVector2f posbanner = {800, 100};
            sfVector2f posmenu = {840, 400};
            sfSprite_setTexture(js->pausebanner, js->tpausebanner, sfTrue);
            sfSprite_setTexture(js->pausemenu, js->tpausemenu, sfTrue);

            sfSprite_setPosition(js->pausebanner, posbanner);
            sfSprite_setPosition(js->pausemenu, posmenu);

            while (sfRenderWindow_pollEvent(js->window, &event)) {
                if (js->event.type = sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyQ)) {
                    pause = 0;
                }
                if (sfMouse_isButtonPressed(sfMouseLeft)) {
                printf("x : %i\ny : %i\n", position.x, position.y);
                }
                if (sfMouse_isButtonPressed(sfMouseLeft)) {
                    if (position.x >= 850 && position.x <= 850 + 234 && position.y >= 431 && position.y <= 431 + 45) {
                        pause = 0;
                    }
                    if (position.x >= 854 && position.x <= 854 + 232 && position.y >= 495 && position.y <= 495 + 45) {
                        sfRenderWindow_close(js->window);
                        sfMusic_stop(js->music);
                        play();
                    }
                    if (position.x >= 855 && position.x <= 855 + 232 && position.y >= 563 && position.y <= 563 + 45) {
                        sfRenderWindow_close(js->window);
                        sfMusic_stop(js->music);
                        pause = 0;
                    }
                }
                if (event.type == sfEvtClosed) {
                    closed = 1;
                    sfRenderWindow_close(js->window);
                }
            }
            sfRenderWindow_display(js->window);
            sfRenderWindow_drawSprite(js->window, js->pausemenu, NULL);
            sfRenderWindow_drawSprite(js->window, js->pausebanner, NULL);
        }
        sfRenderWindow_display(js->window);
        sfRenderWindow_drawSprite(js->window, js->sprite, NULL);
        sfRenderWindow_drawSprite(js->window, en->sprennemie,NULL);
        sfRenderWindow_drawSprite(js->window, js->elixir, NULL);
        sfRenderWindow_drawText(js->window, js->nbelixir, NULL);
        sfRenderWindow_drawSprite(js->window, js->deck, NULL);
        sfRenderWindow_drawSprite(js->window, js->firstcard, NULL);
        sfRenderWindow_drawSprite(js->window, js->secondcard, NULL);
        sfRenderWindow_drawSprite(js->window, js->thirdcard, NULL);
        sfRenderWindow_drawSprite(js->window, js->fourthcard, NULL);
        sfRenderWindow_drawSprite(js->window, js->elixir2, NULL);
        sfRenderWindow_drawSprite(js->window, js->elixir3, NULL);
        sfRenderWindow_drawSprite(js->window, js->elixir4, NULL);
        sfRenderWindow_drawSprite(js->window, js->sprpause, NULL);
        sfRenderWindow_drawSprite(js->window, js->firstelixir, NULL);
        sfRenderWindow_drawText(js->window, js->firstcost, NULL);
        sfRenderWindow_drawText(js->window, js->secondcost, NULL);
        sfRenderWindow_drawText(js->window, js->thirdcost, NULL);
        sfRenderWindow_drawText(js->window, js->fourthcost, NULL);
        sfRenderWindow_drawSprite(js->window, tw->towersprite, NULL);
        for (;tamp; tamp = tamp->next) {
        sfRenderWindow_drawSprite(js->window, tamp->sprennemie, NULL);
        }
    }
}

void poubelle2(defenderst *js, ennemie *en, tower *tw)
{
    sfSprite_destroy(js->sprite);
    sfSprite_destroy(en->sprennemie);
    sfSprite_destroy(js->deck);
    sfSprite_destroy(js->firstcard);
    sfSprite_destroy(js->secondcard);
    sfSprite_destroy(js->thirdcard);
    sfSprite_destroy(js->fourthcard);
    sfSprite_destroy(js->firstelixir);
    sfSprite_destroy(js->elixir);
    sfSprite_destroy(js->elixir2);
    sfSprite_destroy(js->elixir3);
    sfSprite_destroy(js->elixir4);
    sfSprite_destroy(js->sprpause);
    sfSprite_destroy(js->pausebanner);
    sfSprite_destroy(js->pausemenu);
    sfTexture_destroy(js->texture);
    sfTexture_destroy(js->tdeck);
    sfTexture_destroy(js->tfirstcard);
    sfTexture_destroy(js->tsecondcard);
    sfTexture_destroy(js->tthirdcard);
    sfTexture_destroy(js->tfourthcard);
    sfTexture_destroy(js->tcardelixir);
    sfTexture_destroy(js->telixir);
    sfTexture_destroy(js->tpausebanner);
    sfTexture_destroy(js->tpause);
    sfTexture_destroy(js->tpausemenu);
    sfText_destroy(js->nbelixir);
    sfText_destroy(js->firstcost);
    sfText_destroy(js->secondcost);
    sfText_destroy(js->thirdcost);
    sfText_destroy(js->fourthcost);
    sfMusic_destroy(js->music);
    sfRenderWindow_destroy(js->window);
}

int Defender(menust *mn)
{
    tower *tw = malloc(sizeof(tower));
    defenderst *js = malloc(sizeof(defenderst));
    ennemie *en = malloc(sizeof(ennemie));
    en->posgiant.x = 200;
    en->posgiant.y = 375;
    initiale2(js, en, tw);
    initiale3(en);
    boucle2(js, en, tw);
    poubelle2(js, en, tw);
}