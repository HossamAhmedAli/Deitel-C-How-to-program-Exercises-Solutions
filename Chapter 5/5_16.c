#include<stdio.h>
unsigned int integerPower(int base , int exponent);
void main()
{
  printf("integerPower( 3, 4 )=%d",integerPower(3,4));

}
unsigned int integerPower(int base , int exponent)
{
    int loop,output=1; // for multiplication times
    if(exponent == 0) return 1; // any number with exponent=0 equals 1
     else
    {
    for(loop=1;loop<=exponent;loop++)
      {
        output*=base; // multiplication from 1 to exponent
      }   // end for
    }// end else
    return output;
}
