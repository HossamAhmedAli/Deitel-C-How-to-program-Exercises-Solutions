/* try to input a big fractional number to understand the output
   input example: 58.326547 and check the output..
*/

#include <stdio.h>
#include <math.h>
double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number);
double roundToThousandths(double number);

int main(void)
{
    double x=0;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%lf", &x); // read input
        printf("x = %f\n", x);
        printf("roundToInteger(x) = %f\n", roundToInteger(x));
        printf("roundToTenths(x) = %f\n", roundToTenths(x));
        printf("roundToHundreths(x) = %f\n", roundToHundreths(x));
        printf("roundToThousandths(x) = %f\n", roundToThousandths(x));
    }

    return 0;

}

double roundToInteger(double number)
{
    return floor(number+0.5);
}// end of roundToInteger(double number)

double roundToTenths(double number)
{
    return floor(number*10+0.5)/10;
}//end of roundToTenths(double number)

double roundToHundreths(double number)
{
    return floor(number* 100+0.5)/100;
} // end of roundToHundreths(double number)

double roundToThousandths(double number)
{
    return floor(number*1000+0.5)/1000;
}// end of roundToThousandths(double number)
