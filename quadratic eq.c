#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,r1,r2;

    printf("Enter coefficients a,b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = b*b - 4*a*c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct: %.2lf and %.2lf", r1,r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2*a);
        printf("Roots are real and equal: %.2lf and %.2lf", r1,r2);
    }
    else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-d) / (2*a);
        printf("Roots are imaginary: %.2lf + %.2lfi and %.2lf - %.2lfi", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
