#include <stdio.h> 
#include <math.h>
void demo() {
     int n=1 ;
     static int sv = 1 ;
     printf("n=%d, sv=%d\n", n, sv) ;
     n++; 
     sv++; 

}
void move(int x , int y ) {
    static int prex = 0 ;
    static int prey = 0 ;
    double distance = sqrt(pow(prex-x,2)+pow(prey-y,2)) ; 
    printf("distance=%.2f\n", distance) ;
    prex = x ; 
    prey = y ; 
}
int main(){
    for (int i=0; i<5; ++i ) {
        move(i+5,i*2);
    }

}
