#include <stdio.h>
#include  <limits.h> 

void demo1(){
     int a[] = {10,15,20,25} ;
    int *p = a ; 
    printf("%zu\n", sizeof(int)) ; 
    printf("*p  = %d\n",*(p+2)) ; 
}

int main()
{ 
    demo1() ; 
    return 0; 
}