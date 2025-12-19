#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "bibliotheque.h"

int main(void)
{
    int choix = 0;

    do
    {
        printf("\n\nBIENVENUE DANS LE MENU DES FONCTIONS\n\n");
        printf("1. Factorielle\n");
        printf("2. Puissance\n");   
        printf("3. Permutation\n");
        printf("4. Equation du second degre\n");
        printf("5. Nombre Premier\n");
        printf("6. Distance entre deux points");
        scanf("%d", &choix);

        switch (choix){
            case 1:{
                int n, result;
                printf("Entrer un entier positif: ");
                scanf("%d",&n);
                result = fact(n);
                printf("%d! == %d\n\n", n, result);

                break;
            }
            case 2:{
                int nombre, puissance, result;
                printf("Calcul de a^b\n");
                printf("Entrer a: ");
                scanf("%d", &nombre);
                printf("Entrer b: ");
                scanf("%d",&puissance);
                result = power(nombre, puissance);
                printf("%d^%d == %d\n\n", nombre, puissance, result);
                break;
            }
            case 3:{
                float a, b;
                printf("Il est question pour nous de permuter deux nombres a et b.\n");
                printf("Entrer a: ");
                scanf("%f", &a);
                printf("Entrer b: ");
                scanf("%f", &b);
                printf("On avait: a == %f et b == %f\n", a, b);

                permutation(&a, &b);

                printf("Et maintenant a == %f et b == %f\n\n", a, b);
                break;
            }
            case 4:{
                float a, b, c;
                float x1, x2, re, im;
                int nombreSolutions;

                printf("\nResolution de l'equation du second degre: ax^2 + bx + c = 0 \n");
                printf("\nEntrer la premiere valeur (a) : ");
                scanf("%f", &a);
                printf("\nEntrer la seconde valeur (b) : ");
                scanf("%f", &b);
                printf("\nEntrer la troisieme valeur (c) : ");
                scanf("%f", &c);
                solution_equation(a, b, c, &x1, &x2, &re, &im, &nombreSolutions);

                if (nombreSolutions == 2)
                    printf("\nOn a deux solutions reelles : x1 = %.2f et x2 = %.2f\n", x1, x2);
                else if (nombreSolutions == 1)
                    printf("\nOn a une solution double : x = %.2f\n", x1);
                else if (nombreSolutions == 0)
                    printf("\nOn a deux solutions complexes : %.2f + i%.2f et %.2f - i%.2f\n", re, im, re, im);
                else
                    printf("\nCe n'est pas une equation du second degre.\n\n");
                break;
            }
            case 5:{
                int nombre;

                printf("Entrez un entier: ");
                scanf("%d", &nombre);

                if (nombrePremier(&nombre))
                    printf("%d est un nombre premier.\n", nombre);
                else
                    printf("%d n'est pas un nombre premier.\n\n", nombre);
                break;
            }
            case 6:{
                Point A, B;
                printf("\nDetermination de la distance entre deux points A(x1, y1) et B(x2, y2)");
                printf("\nEntrez x1 : ");
                scanf("%lf", &A.x);
                printf("\nEntrez y1 : ");
                scanf("%lf", &A.y);
                printf("\nEntrez x2 : ");
                scanf("%lf", &B.x);
                printf("\nEntrez y2 : ");
                scanf("%lf", &B.y);
                printf("\nLa distance entre ces deux points est: %.2f\n\n", distancePoint(A, B));
                break;
            }
            case 0:
                break;
            default:
                printf("\nRetry...\n\n");
        }
    } while (choix != 0);
    
    return EXIT_SUCCESS;
}