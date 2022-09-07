#include <stdio.h>
#include <string.h>
#include <locale.h>


char tracks[][80] = {
    "Я оставил свое сердце в Гарвардской медицинской школе",
    "Ньюарк, Ньюарк - город, полный чудес",
    "Танец с мужланом",
    "Отсюда и до роддома",
    "Девчонка с чудесного острова Иводзима",
};

void find_track(char search_for[])
{
    int i;
    for (i=0; i<5; i++) {
        if (strstr(tracks[i], search_for))
            printf("Песня номер %i: '%s'\n", i+1, tracks[i]);
    }
}

int main(void) 
{
    char *locale = setlocale(LC_ALL,"");
    char search_for[80];
    printf("Искать: ");
    fgets(search_for, 80, stdin);
    search_for[strlen(search_for) - 1] = '\0';
    find_track(search_for);
    return 0;
}
