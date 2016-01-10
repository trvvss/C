#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Number of people in room: ");
        n = GetInt();
    }
    while (n<1); //user has to write at least one person
    
    int ages[n];
    
    for (int i = 0; i < n; i++) // int i will represent how many people a
    {
        printf("Age of person #%i: ", i +1);
        ages[i] = GetInt();
   }
   
   printf("Time passes...\n");
   for (int i = 0; i < n; i++)
   {
        printf("A year from now, person #%i will be %i years old.\n", i+1, ages[i] + 1); // because of zero indexing
   }
}
