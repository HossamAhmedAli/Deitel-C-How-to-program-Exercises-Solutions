#include <stdio.h>
#include <math.h>
float hypotenuse(float side_a, float side_b);
void main()
{
    printf("hypotenuse of (3,4):%.1f\n", hypotenuse(3,4));
    printf("hypotenuse of (5,12):%.1f\n", hypotenuse(5,12));
    printf("hypotenuse of (8,15):%.1f\n", hypotenuse(8,15));
}
float hypotenuse(float side_a, float side_b)
{

    return sqrt((side_a*side_a) + (side_b*side_b));
}
