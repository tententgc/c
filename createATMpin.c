#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
char *genpwd (char *pwd, int len,char  z) 
{
    int i = 0 ; 
    for (i = 0 ; i < len ; i++)
    {   
        if (z == 'w'){
            pwd[i] = (rand() % 26) + 'a' ; 
        }
        else if (z=='W'){ 
            pwd[i] = (rand() % 26) + 'A' ; 
        }
        else{ 
            pwd[i] = (char) (rand() % 10) + '0' ;
        }
    }
    pwd[i] = '\0' ; 
    return pwd ; 
} 

char *genpwdmix (char *pwd, int len) 
{
    char *s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789" ; 
    int i = 0 ;
    size_t n = strlen(s) ; 
    for (i = 0 ; i < len ; i++)
    {
        pwd[i] = s[rand() % n] ; 
    } 
    pwd[i] = '\0' ; 
    return pwd ; } 


int main(){
    char pwd[20]  = ""; 
    for (int i = 0 ; i < 5 ; i++){
        printf("%s\n", genpwdmix(pwd, 6));
    } 
    return 0; 
}