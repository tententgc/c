#include <stdio.h> 
#include <math.h> 

double bmi(double h,double w ){
     return w/pow(h/100.0,2 );
}
void demo2(){
    int p[][5]= {
        {170,165,175,162,16},
        {70,55,72,48,50},
        {'M','F','M','F','M'}
        };
    for (int i=0 ; i<5 ; i++){
        printf("%3d  %d %c %.2f\n",p[0][i],p[1][i],p[2][i],bmi(p[0][i],p[1][i]));
    }
}
int main(){ 
    demo2(); 
}