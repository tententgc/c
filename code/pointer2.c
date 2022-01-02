#include <stdio.h> 


void demo1(int a ,int *b ){
     a = a + 1; 
     *b = *b + 1; 
}

void swap(int *a, int *b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void upper(char *c){
     if(*c >= 'a' && *c <= 'z'){
         *c = (char)(*c - ('a' - 'A')); 
     } 
}

int main(){ 
    char a = 'b'; 
    upper(&a); 
    printf("%c\n", a); 
    // int m=5 ,n=10 ; 
    // demo1(m,&n); 
    // printf("%d %d\n",m,n); 
    // swap(&m,&n); 
    // printf("%d %d",m,n); 

    return 0; 
}