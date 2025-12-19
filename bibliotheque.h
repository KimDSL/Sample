#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
// Définition d'une fonction de calcul de factorielle.
unsigned int fact(unsigned int value);

// Définition d'une fonction d'élévation à une puissance données.
int power(int value, unsigned int pow);

// Définition d'une fonction de permutation de deux nombres
void permutation(float *a, float *b);

// Définition d'une fonction de résolution d'équation du second degré
void solution_equation(float a, float b, float c, float *x1, float *x2, float *re, float *im, int *nombreSolutions);

// Définition d'une fonction de vérification si un nombre est premier
int nombrePremier(int *nombre);

// Définition d'une fonction de cqlcul de distance entre deux points
typedef struct
{
    double x;
    double y;
} Point;

double distancePoint(Point a, Point b);

#endif
// comment