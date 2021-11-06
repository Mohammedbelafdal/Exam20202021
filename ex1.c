#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char s[256] = "La   sténographie consiste  à dissimuler un texte caché dans un petit message anodin";

    int a=0;

    puts(s); //printf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            printf("%c", s[i]);
        }
        else
        {
            printf(".");
        }
    }

    printf("\n");
    char letterBuffer='a'-1;
    char currentLetter='\0';
    do//pour chaque caractere
    {
        currentLetter=s[a];
        a++;
       if (currentLetter==' ')//detection d un espace donc incrementation
       {
           letterBuffer++;
       }
       else
       if(letterBuffer!='a'-1){//si une chaine d espace etait compte, afficher la lettre et reinitialisation
           printf("%c",letterBuffer);
           letterBuffer='a'-1;
       }
       
    } while (currentLetter!='\0');
    printf("\n");
    return 0;
}