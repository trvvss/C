#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height;
    int row;
    int space;
    int hash;
    
 
    do  //ask user for pyramid height (1-23) using do while loop
       
        {
            printf("Height:");
            height = GetInt();   
        }
     while (height <0 || height>23);
     
     for (row = 0; row < height; row++)
        {
           
           for (space=1; space<(height-row); space++)
                {
                    printf (" ");
                }
           for (hash=0; hash<=(row+1); hash++)
                {
                    printf ("#");
                
                 }
            printf ("\n");
        }
     return 0;
}
