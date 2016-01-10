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
     
    //get the plain text from user to be encrypted 
    
    string plain_text = GetString();
    
    //ensure the user-input text isn't null. proceed with rest of code
    
    if (plain_text != NULL) 
        {
            //define variables we'll be working with
            
            string key_word = argv[1];
            int key_index = 0; 
            int numerator = 0;
            int letter = 0;
            int length = 0;
            
            //run loop through the length of the text to be encryped (plain text)
            
            for (letter = 0, length = strlen(plain_text); letter < length; letter++) 
             {
                 if (isalpha(plain_text[letter])) 
                    {
                        key_index = numerator % strlen(key_word);     
                   
                        if (islower(plain_text[letter]))
                            {
                                if(islower(key_word[key_index]))
                                    {
                                        int crypted = ((plain_text[letter]-'a' + key_word[key_index]-'a')%26)+'a';
                                        printf("%c", crypted);
                                    }
                                else
                                    {
                                        int crypted = ((plain_text[letter]-'a' + key_word[key_index]-'A')%26)+'a';
                                        printf("%c", crypted);
                                    }
                            }
                         if (isupper(plain_text[letter]))
                            {
                                if(islower(key_word[key_index]))
                                    {
                                        int crypted = ((plain_text[letter]-'A' + key_word[key_index]-'a')%26)+'A';
                                        printf("%c", crypted);
                                    }
                                else
                                    {
                                        int crypted = ((plain_text[letter]-'A' + key_word[key_index]-'A')%26)+'A';
                                        printf("%c", crypted);
                                    }
                            }
                     //increase numerator of modulo only if key is applied to plaintext       
                     numerator ++;
                    }
                    
          
                else printf("%c", plain_text[letter]);
           
               }
               printf("\n");
                
        }
    //success! end program
        
    return 0;
}
