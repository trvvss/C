#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2) //ensuring program accepts only single command line argument
    
        {   printf("Please type a non-negative integer\n");
    
             return 1;
        }
        
    int key = atoi(argv[1]); //making the user provided string key into an int
    
    string plain_text = GetString(); //getting plain text from user
    
    if (plain_text != NULL)
    {
    
        for (int i = 0, n = strlen(plain_text); i<n; i++) //iterate through each character of the plain text string
          {
                if (isalpha(plain_text[i])) //proceed with conversion if char is a letter
                {
                    if (isupper(plain_text[i]))
                        {
                            char crypted = (((plain_text[i] - 65 + key) % 26) + 65);  //encrypts upper case
                    
                            printf("%c", crypted);
                    
                        }
                    
                    if (islower(plain_text[i]))
                         {
                            char crypted = (((plain_text[i] - 97 + key) % 26) +97);  //encrypts lower case
                    
                            printf("%c", crypted);       
                    
                         }    
                }
                //print non alpha characters
                else printf("%c", plain_text[i]);
            
           
            }
        
                printf("\n"); //placeholder
                
                
    } 
    return 0;
}
