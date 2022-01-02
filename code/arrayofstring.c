#include <stdio.h> 
#include <ctype.h>

void demo1(){
    char *f[] = {"rose", "tulip", "daisy"}; 
    int size = sizeof(f) / sizeof(f[0]); 
    for(int i =  0 ; i < size ; i++){
        printf("%s\n", f[i]);
    } 
}

void demo2(){ 
    char *f[] = {"rose", "tulip", "daisy"}; 
    char fa[3][10] = {"rose", "tulip", "daisy"}; 
    int size = sizeof(f) / sizeof(f[0]); 
    for(int i =  0 ; i < 3 ; i++){
        fa[i][0] = toupper(fa[i][0]); 
        printf("%s\n", fa[i]);  
    } 
}

int main(){
    // demo1(); 
    demo2(); 
     return 0; 
}