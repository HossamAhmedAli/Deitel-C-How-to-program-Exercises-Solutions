
#include<stdio.h>
#include<stdlib.h>
#define max_number 11
#define minimum_number -3
void main()
{
char i;
    srand(time(NULL));
    for( i=0;i<=20;i++) // 20 times loop to check the output
    printf("%d  ",(rand()%(max_number + 1 - minimum_number)) + minimum_number);
}


