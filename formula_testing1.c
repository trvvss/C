#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2) //ensuring program accepts only single command line argument
        {   
            printf("non single command line argument error\n");
            return 1;
        }
        
    for (int i = 0, n = strlen(argv[1]); i<n; i++)
        {
            if (isalpha(argv[1][i]))
                {
                }
            else 
                {
                    printf("non alphabetical error\n");
                    return 1;
                }
        }
        
     //everything above is a-okay
     
    
    
   
    
    string plain_text = GetString(); //getting plain text from user
    
    if (plain_text != NULL) 
        {
            //here is where allllll the rest of that code is supposed to go
            
            string key_word = argv[1];
            
            int key_word_ascii = argv[1][0];
            
            char plain_text_letter = plain_text[0];
            
           
            
            printf("%s\n", key_word);
            printf("%d\n", key_word_ascii);
            printf("%c\n", key_word_ascii);
            printf("%c\n", plain_text_letter);
            printf("%d\n", plain_text_letter);
            
            int key_length = strlen(key_word);
            
            
            int summed_digit = plain_text_letter + 2;
            int summed_letter = (plain_text_letter + 'A') % key_length + 'A';
            int summed_again = ((plain_text_letter + key_word_ascii) % key_length + key_word_ascii);
            
            printf("%c\n", summed_digit);
            printf("%c\n", summed_letter);
            
            plain_text_letter = plain_text_letter + 1;
            summed_letter = (plain_text_letter + 'A') % key_length + 'A';
            printf("%c\n", summed_letter);
            printf("%c\n", summed_again);
        }
    return 0;
}
