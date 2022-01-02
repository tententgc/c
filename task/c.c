//count this word on sentence 

#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    char d[100];
    int count = 0;
    printf("Enter a sentence\n");
    gets(c);
    printf("Enter a word\n");
    gets(d);
    char *p = strstr(c,d);
    while(p != NULL){
        count++;
        p = strstr(p+1,d);
    }
    printf("count is %d\n",count);
    return 0;
}