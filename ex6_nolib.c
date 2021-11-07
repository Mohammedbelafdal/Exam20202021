#include <stdlib.h>
#include <stdio.h>
int stringlenght(char *input)
{
    int lenght=-1;
    do
    {
        lenght++;
    } while (input[lenght]!='\0');
    return lenght;
}
int main()
{
    int condition = 0;
    char *verb=(char *)malloc(50);
    do
    {
        printf("Saisir un verbe en -ER\n");
        scanf("%s",verb);
    } while (!((verb[stringlenght(verb)-2]=='e' && verb[stringlenght(verb)-1]=='r')));
    verb[stringlenght(verb)-2]='\0';//decoupage à e
    printf("je %se\n",verb);
    printf("tu %ses\n",verb);
    printf("il %se\n",verb);
    printf("nous %sons\n",verb);
    printf("vous %sez\n",verb);
    printf("ils %sent\n",verb);

    return 0;
}