#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

int main()
{

    int cote=0;
    do
    {
        printf("Entree une valeur de cote\n");
        scanf("%d",&cote);
    } while ((cote%2)!=1);// tant que cote est impaire
    for(int hauteur=0;hauteur<cote;hauteur++)
    {
        for(int largeur=0;largeur<cote;largeur++)
    {
        if(largeur%2 | hauteur%2)// si l absice ou l ordonnee est paire
        {
            printf("*");
        }
        else
        {
            printf(".");
        }
    }
    printf("\n");
    }
    return 0;
}