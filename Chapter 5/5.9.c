#include<stdio.h>
#include<math.h>
float calculateCharges(float hours); // take hours and return total charges of a customer
void main()
{
   float car_hours[3];
    char car;

    /* getting hours from car users*/
        for( car=0; car<=2;car++)
    {
        printf("Enter hours of car %d: ",car+1);
        scanf("%f",&car_hours[car]);
    }

    printf("Car        Hours        Charge\n");

    /* print the output: car     hours     charge and results below every column*/
    for( car=0; car<=2;car++)
    {
        printf("%d           %d             %.2f\n",car+1,(int)car_hours[car],calculateCharges(car_hours[car]));
    }

}
float calculateCharges(float hours)
{
    if(hours <=3) return 2; // in case of less than 3 hours, fees would be 2$
    else if ( hours > 3 && hours < 24) return (2+((hours-3)*0.5)); // fees would be 2$ for the 1st 3 hours+ 0.5$ for an extra hour
    else if (hours == 24) return 10; // if 2h hours >> charge is 10$ only
    // we can add more security feature when user usage is above 24h
}
