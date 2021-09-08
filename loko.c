#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <stdlib.h>

struct wick 
{
    sfRenderWindow* screen;

    sfTexture* texture_background;
    sfSprite* background;

    sfTexture* texture_titre;
    sfSprite* titre;

    sfTexture* texture_plays;
    sfSprite* plays;

    sfTexture* texture_description;
    sfSprite* description;

    sfTexture* texture_credit;
    sfSprite* credit;

    sfTexture* texture_quite;
    sfSprite* quite;

    sfTexture* texture_curseur;
    sfSprite* curseur;    

    sfFont* font;

    sfMusic* song;

    sfEvent event;
};

struct john
{
    
    sfRenderWindow* screen;

   sfTexture* texture_exit;
    sfTexture* texture_back;
    sfSprite* exit;
    sfSprite* back;

    sfTexture* texture_level1;
    sfSprite* level1;

    sfVector2i mouse;
    sfVector2f local_pos;

    sfMusic* music;

    sfEvent event;
};

struct level1
{
    sfRenderWindow* screen;

    sfTexture* texture_ground;
    sfSprite* ground;

    sfTexture* jwt;
    sfSprite* jwp;

    sfSprite* duck;
    sfSprite* duckduck;
    sfSprite* duckduckduck;

    sfSprite* bird;
    sfSprite* birdbird;
    sfSprite* birdbirdbird;

    sfIntRect jw_rect;
    sfTime jw_time;
    sfClock *jw_clock;
    int second;
    int value;

    sfMouseButton souris;
    sfVector2i mouse;
    sfVector2f mouse2;
    sfVector2f duck_pos;

    sfMusic* musique;

    sfEvent event;

};




typedef struct wick wick;
typedef struct john john;
typedef struct level1 lv1;






void start(wick *JWG, john *parabelum, lv1 *lv1);
void levelMenue(john *parabelum,lv1 *lv1, sfRenderWindow *window);
void levelf1(lv1 *lv1,wick *parabelum, sfRenderWindow *window);
