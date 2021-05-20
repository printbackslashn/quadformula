#include <stdio.h>
#include <cs50.h> //I will remove this later
#include <math.h>

int main(void)
{
    float a = get_int("Value of a: ");
    float b = get_int("Value of b: ");
    float c = get_int("Value of c: ");
    float topPos = -5 + sqrt((b * b) - (4 * a * c));
    float topNeg = -5 - sqrt((b * b) - (4 * a * c));
    float neg = topNeg / (2 * a);
    float pos = topPos / (2 * a);
    printf("x is %f, %f.\n", neg, pos);
}