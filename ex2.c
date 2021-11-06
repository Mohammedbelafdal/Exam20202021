#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    float noteInfo = 0;
    float noteMath = 0;
    float noteMatLab = 0;
    printf("Saisir la moyenne d'informatique :");
    scanf("%f", &noteInfo);
    printf("\nSaisir la moyenne d'Math :");
    scanf("%f", &noteMath);
    printf("\nSaisir la moyenne d'Matlab :");
    scanf("%f", &noteMatLab);
    float moyenne = (noteMatLab + noteInfo + noteMath) / 3;
    printf("Moyenne calculé:%f\n", moyenne);
    if ((noteInfo < 9) | (noteMath < 9) | (noteMatLab < 9) | (moyenne<10))
    {
        printf("Ue non validé");
        return EXIT_SUCCESS;
    }
    printf("Ue validé\n");
    return EXIT_SUCCESS;
}