#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, sol1, sol2 = 0;
    int discriminant = 0;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic");
    } else if ((discriminant = (b * b) - (4 * a * c)) < 0) {
        printf("Imaginary roots");
    } else {
        sol1 = ((-b) - (sqrt(discriminant))) / (2 * a);
        sol2 = ((-b) + (sqrt(discriminant))) / (2 * a);
        if (sol1 < 0) {
            printf("Roots are %.4lf and %.4lf", sol1, sol2);
        } else if (sol2 < 0) {
            printf("Roots are %.4lf and %.4lf", sol2, sol1);
        } else {
            printf("Roots are %.4lf and %.4lf", sol1, sol2);
        }
    }
}
