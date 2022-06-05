#include <stdio.h>

int main()
{

    __uint16_t cote=0;
    do
    {
        printf("Entree une valeur de cote\n");
        scanf("%d",&cote);
    } while (!(cote&1));
    for(int hauteur=0;hauteur<cote;hauteur++)
    {
        for(int largeur=0;largeur<cote;largeur++)
    {
        (largeur&1 | hauteur&1)?printf("*"):printf(".");
    }
    printf("\n");
    }
    return 0;
}
