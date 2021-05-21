#include <stdio.h>
#include <cs50.h> //I will remove this later
#include <math.h>
#include <string.h>

float quadFuncPos(float a, float b, float c);
float quadFuncNeg(float a, float b, float c);
int main(void)
{
    float a = get_float("Value of a: ");
    float b = get_float("Value of b: ");
    float c = get_float("Value of c: ");
    float neg = quadFuncNeg(a, b, c);
    float pos = quadFuncPos(a, b, c);
    printf("x is %f, %f.\n", quadFuncNeg(a, b, c), quadFuncPos(a, b, c));

    //Works with two solution with a:3 b:6 c:-8
}
float quadFuncPos(float a, float b, float c)
{

    float topPos = -b + sqrt((b * b) - (4 * a * c));
    float pos = topPos / (2 * a);
    return pos;


}
float quadFuncNeg(float a, float b, float c)
{
    float topNeg = -b - sqrt((b * b) - (4 * a * c));
    float neg = topNeg / (2 * a);
    return (topNeg / (2 * a));
}