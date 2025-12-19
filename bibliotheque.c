#include "bibliotheque.h"
#include<math.h>

// Définition d'une fonction de calcul de factorielle.
unsigned int fact(unsigned int value)
{
    unsigned int result = 1;
    while (value > 1)
    {
        result *= value;
        value--;
    }
    return result;
}

// Définition d'une fonction d'élévation à une puissance données.
int power(int value, unsigned int pow)
{
    if (pow == 0)
        return 1;
    if (pow == 1)
        return value;
    int accumulator = 1;
    while (pow > 0)
    {
        accumulator *= value;
        pow--;
    }

    return accumulator;
}

// Définition d'une fonction de permutation de deux nombres
void permutation(float *a, float *b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

// Définition d'une fonction de résolution d'équation du second degré
void solution_equation(float a, float b, float c, float *x1, float *x2, float *re, float *im, int *nombreSolutions)
{
    float d; // déterminant

    if (a == 0){

        *nombreSolutions = -1;
        return;
    }

    d = b * b - 4 * a * c; // calcul du déterminant

    if (d > 0)
    {
        *x1 = (-b + sqrt(d)) / (2 * a); // première solution
        *x2 = (-b - sqrt(d)) / (2 * a); // deuxième solution
        *nombreSolutions = 2;
    }
    else if (d == 0)
    {
        *x1 = -b / (2 * a); // solution double unique
        *nombreSolutions = 1;
    }
    else
    {
        *re = -b / (2 * a);  //partie reelle
        *im = sqrt(-d) / (2 * a);  // partie imaginaire
        *nombreSolutions = 0; // solutions complexes
    }
}

// Définition d'une fonction de vérification si un nombre est premier
int nombrePremier(int *nombre)
{
    int i;

    if (*nombre <= 1)
    {
        return 0;
    }

    for (i = 2; i * i <= *nombre; i++)
    {
        if (*nombre % i == 0)
            return 0;
    }

    return 1;
}

// Définition d'une fonction de cqlcul de distance entre deux points
double distancePoint(Point a, Point b){
    Point dist;

    dist.x = b.x - a.x;
    dist.y = b.y - b.x;

    double distance = sqrt(pow(dist.x, 2) + pow(dist.y, 2));
    return distance;

}