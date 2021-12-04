#include <stdio.h>
#include <ctype.h> 
#include <string.h> 

void strupper(char s[]){  //can code char *s 
    int i=0; 
    while (s[i]){
        s[i]=toupper(s[i]);
        i++;
    }
}

int strlength(char *s ){
     int i=0;
    while(*s){     // can write (*s != '\0') 
         s++; 
         i++;
    }
    return i; 
}
int main(){
    char flower[] = "lily"; 
    char *a  = "hello";
    strupper(flower); 
    printf("%s\n", flower); 
    return 0; 
}