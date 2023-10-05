#include<stdio.h>
#include<math.h>
double floor_round(double input);
 void main()
 {
     double number; // number from the user
    while(1)
    {
     printf("Enter the number: ");
     scanf("%lf",&number); // read number
     printf("The original number is ( %.2lf ).. The rounded number is ( %d )\n",number,(int)floor_round(number));// (int) is to get the integer value of the return double
    }
 }
double floor_round(double input)
{
    return floor(input+.5);
}
