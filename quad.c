#include <stdio.h>
#include <cs50.h> //I will remove this later
#include <math.h>

int main(void)
{
    float a = get_int("Value of a: ");
    float b = get_int("Value of b: ");
    float c = get_int("Value of c: ");
    float topPos = -b + sqrt((b * b) - (4 * a * c));
    float topNeg = -b - sqrt((b * b) - (4 * a * c));
    float neg = topNeg / (2 * a);
    float pos = topPos / (2 * a);
    if (neg == pos)
    {
        printf("x is %f.\n", pos);
    }
    else
    {
        printf("x is %f, %f.\n", neg, pos);
    }

    //Works with two solution with a:3 b:6 c:-8
}