//1009 - Salary with Bonus
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
main()
{
    char a;
    double b, c;
    scanf("%s %lf %lf", &a, &b, &c);
    double d = 0;
    d = b + (0.15 * c);
    printf("TOTAL = R$ %.2lf\n", d);
}