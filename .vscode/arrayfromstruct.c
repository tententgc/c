#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name; 
    double h,w ; 
    char gender;
}Person;

double bmi(double h ,double w){ 
    return w/pow(h/100.0,2);
}


void demo(){ 
    Person p[] =
    {
         {"fong",170,70,'M'}, 
         {"riw",168,50,'F'},
         {"modull",155,43,'F'}
    };
    int size = sizeof(p)/sizeof(p[0]); ; 
    for(int i=0 ;i<size;i++){ 
        printf("%10s  : h = %.2f  w = %.2f gender = %c Bmi  = %.2f\n",p[i].name,p[i].h,p[i].w,p[i].gender,bmi(p[i].h,p[i].w)) ;
    }
}

int main(){
    demo(); 
     return 0 ;
}
