#include <stdio.h> 
#include <math.h>

struct point {
    int x;
    int y;
};

typedef struct{
     double x,y;
}coordinate;


double distance3(coordinate a, coordinate b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
double distance2(struct point p1, struct point p2) { 
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)); 
}

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
} 

int main(){ 
    double d1= distance(2,5,4,10);
    printf("d1 = %.2f\n",d1);

    struct point p1; 
    p1.x = 2;
    p1.y = 5;

    struct point p2 ={4,10}; 


    double d2= distance2(p1,p2);
    printf("d2 = %.2f\n",d2);  

    coordinate q1= {2,5}; 
    coordinate q2= {4,10};
    double d3= distance3(q1,q2);
    printf("d3 = %.2f\n",d3);

    return 0; 
}