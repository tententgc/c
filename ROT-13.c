#include <stdio.h> 
#include <string.h>
#include <ctype.h>


int main(){
    char s[] = "hello";
    char upper;
    for (int i = 0 ; i < strlen(s) ; i++){
        upper = toupper(s[i]);
        if (upper >= 'A' && s[i] <= 'M'){  //can use toupper or s[i]  it same 
             printf("%c", s[i] + 13);
        }
        else{
            printf("%c", s[i] - 13);
        }
    }
    return 0;
}   