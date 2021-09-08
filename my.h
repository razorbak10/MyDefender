/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** my
*/
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

char *nb_tochar(int i);

typedef struct menust {
    sfRenderWindow* window;
    sfTexture* texture;
    sfTexture* tboutonplay;
    sfTexture* tboutonoption;
    sfTexture* tboutonhelp;
    sfTexture* thowtoplay;
    sfTexture* tnon;
    sfTexture* tmenu;
    sfTexture* tclose;
    sfMusic* music;
    sfEvent event;
    sfSprite* sprclose;
    sfSprite* sprnon;
    sfSprite* sprite;
    sfSprite* buttonhelp;
    sfSprite* howtoplay;
    sfSprite* sprmenu;
    sfSprite* boutonplay;
    sfSprite* boutonoption;
};
typedef struct menust menust;

typedef struct defenderst {
    int elixirint;
    sfRenderWindow* window;
    sfEvent event;
    sfTexture* texture;
    sfTexture* tpause;
    sfTexture* tdeck;
    sfTexture* telixir;
    sfTexture* tfirstcard;
    sfTexture* tcardelixir;
    sfTexture* tsecondcard;
    sfTexture* tthirdcard;
    sfTexture* tfourthcard;
    sfTexture* tpausebanner;
    sfTexture* tpausemenu;
    sfMusic* music;
    sfSprite* firstcard;
    sfSprite* firstelixir;
    sfSprite* secondcard;
    sfSprite* secondelixir;
    sfSprite* thirdcard;
    sfSprite* thirdelixir;
    sfSprite* fourthcard;
    sfSprite* fourthelixir;
    sfSprite* pausebanner;
    sfSprite* pausemenu;
    sfSprite* sprite;
    sfSprite* elixir;
    sfSprite* elixir2;
    sfSprite* elixir3;
    sfSprite* elixir4;
    sfSprite* deck;
    sfSprite* sprpause;
    sfVector2f position;
    sfFont* font;
    sfText* nbelixir;
    sfText* score;
    sfText* score2;
    sfText* firstcost;
    sfText* secondcost;
    sfText* thirdcost;
    sfText* fourthcost;
    sfClock *clockennemie;
    sfClock *clocksprenne;
};
typedef struct defenderst defenderst;

typedef struct tower tower;
struct tower
{
    sfMusic* achat;
    sfTexture* towertex;
    sfSprite* towersprite;
    sfVector2f towerpose;
    tower *news;
};


typedef struct ennemie ennemie;
struct ennemie
{
    int life;
    sfVector2f posgiant;
    sfClock *clockennemie;
    sfClock *clocksprenne;
    sfTexture* tennemie;
    sfTexture* tennemie1;
    sfTexture* tennemie2;
    sfTexture* tennemie3;
    sfTexture* tennemie4;
    sfSprite* sprennemie;
    ennemie *next;
};