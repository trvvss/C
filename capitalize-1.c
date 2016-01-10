#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//demonstrates how ctype may be used to change lower to upper and vice versa

int main(void)
{
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++) //goes through length of word
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
            else 
            {
                printf("%c", s[i]);
            }
     }
     printf("\n");
}
