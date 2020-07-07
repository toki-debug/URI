//1010 - Simple Calculate
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
main()
{
    int a, b;
    double c, f;
    int d, e;
    scanf("%d %d %lf %d %d %lf", &a, &b, &c, &d, &e, &f);
    double g;
    g = (b * c) + (e * f);
    printf("VALOR A PAGAR: R$ %.2lf\n", g);
}