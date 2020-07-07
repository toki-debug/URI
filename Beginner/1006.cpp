//1006 - Average 2
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
main()
{
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    double d = 0;
    a = a * 2;
    b = b * 3;
    c = c * 5;
    d = (a + b + c) / 10;
    printf("MEDIA = %.1lf\n", d);
    return 0;
}
