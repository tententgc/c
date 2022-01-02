#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h>

void strcap(char s[]){ 
    s[0] = (char)toupper(s[0]); 
}

void strcap2(char *s){ 
    *s = (char)toupper(*s);  
 } 

size_t strlength(char *s){
     size_t i = 0; 
     for (i=0; *s; i++){ 
         s++;
     }
    return i ; 
}
void strupper(char *s){
    // for(;*s;s++){
    //     *s = (char)toupper(*s);
    // }
    while(*s){
        *s = (char)toupper(*s);
        s++;
    } 
}
int main()
{ 
    char a[] = "mango" ; 
    strcap2(a); 
    printf("%s\n", a); 
    printf("%d\n", strlength(a));
    strupper(a); 
    printf("%s\n", a); 
    return 0 ; 
} 