#include <stdio.h> 

typedef struct {
    int rai;
    int ngan;
    double sqwa;
} area; 

area convert(double totalarea){
    area a;
    a.rai = (int)totalarea / 400;
    a.ngan = ((int)totalarea - (400 * a.rai))/100  ;
    a.sqwa = totalarea - (400 * a.rai) - (100 * a.ngan); 
    return a; 
}

int main() {
    area a = convert(867.3); 
    printf("%d-%d-%.2f\n",a.rai,a.ngan,a.sqwa); 
    return 0;   
}