#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int condition = 0;
    char verb[30];
    do
    {
        printf("Saisir un verbe en -ER\n");
        scanf("%s",&verb);
        if(verb[strlen(verb)-2]=='e' && verb[strlen(verb)-1]=='r')
        {
            condition=1;
        }
    } while (condition==0);
    verb[strlen(verb)-2]='\0';//decoupage à e
    printf("je %se\n",verb);
    printf("tu %ses\n",verb);
    printf("il %se\n",verb);
    printf("nous %sons\n",verb);
    printf("vous %sez\n",verb);
    printf("ils %sent\n",verb);



    return 0;
}