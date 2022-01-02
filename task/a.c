#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{ 
    //split the string into words and store them in an array
    char *sentence; 
    gets(sentence);
    char *word;
    word = strtok(sentence, " ");
    int i = 0;
    
    while(word != NULL)
    {
        int count = 0;
        while (sentence[i] != '\0')
        {
            if (sentence[i] == *word)
            {
                count++;
            }
            else
            {
                i++;
            }
        }
            printf("%s: %d\n", word, count); 
            word = strtok(NULL, " ");
    }
    return 0;
}