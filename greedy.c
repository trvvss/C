#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    float dollaramount;
    int coins=0;
    
    //get a float amount to represent the change that must be given
    do
        {
            printf("Please specify an amount of change in dollars\n");
            dollaramount = GetFloat();
        }
    //dollar amount must be greater than zero
    while (dollaramount<=0);
    
    //using round to convert to int after changing to cents
    
    int centsamount= (int)round(dollaramount*100);
    
    
    while (centsamount>=25)
        {
          coins ++;
          centsamount = centsamount - 25;
        }
    while (centsamount>=10)
        {
          coins ++;
          centsamount = centsamount - 10;
        }    
    while (centsamount>=5)
        {
          coins ++;
          centsamount = centsamount - 5;
        }
    while (centsamount>=1)
        {
          coins ++;
          centsamount = centsamount - 1;
        }
    
    //printing the integer "coins"
        printf("%d\n", coins);
    
}
