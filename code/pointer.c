#include <stdio.h>
#include <math.h> 

int main(){
     int n=7; 
    printf("%d %p\n",n,&n);

    int *p1; //p1 is a pointer to an integer 
    p1 = &n; 
    printf("%p\n",p1); 
    printf("%d\n",*p1);  //dereferencing p1 
    char *c1; //c1 is a pointer to a character 
    int* p2; //p2 is a pointer to an integer 

    int price = 15; 
    int *coke , *fanta,  *sprite;   
    coke = &price; 
    fanta = &price;
    sprite = &price;
    printf("%d %d %d \n", *coke, *fanta, *sprite); 
     return 0; 
}