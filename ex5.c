#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct date
{
    int annee;
    int mois;
    int jour;
}typedef date;

date newDate(int jour,int mois, int annee)
{
    date output;
    output.jour=jour;
    output.mois=mois;
    output.annee=annee;
    return output;
}
int coder(date input)
{
    int output=0;
    output+=input.jour;
    output+=input.mois*100;
    output+=input.annee*10000;
    return output;
}
void afficher(int input)
{
    int annee=input/10000;
    int mois=(input%10000)/100;
    int jour=(input%100);
    printf("%d/%d/%d\n",jour,mois,annee);
}
int main()
{
    date maDate=newDate(4,6,1989);
    int maDateCode=coder(maDate);
    afficher(maDateCode);
    return 0;
}
