#include <stdio.h>
#include <math.h>

typedef struct {
    double x,y; // x and y coordinates
} Coord;

double distance(Coord p1 , Coord p2){
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}; // distance between two points p1 and p2

double triangle(double a , double b , double c)
{
    double s = (a + b + c) / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c));  
}

double triangle_heron(Coord p1, Coord p2, Coord p3){
    double a = distance(p1,p2)  , b = distance(p2,p3) , c = distance(p3,p1); 
    return triangle(a,b,c); 
}; // Heron's formula for the area of a triangle 

int main(){
    printf("area = %.2f\n", triangle(4,13,15)); 
    Coord p1 = {1,5}; 
    Coord p2 = {7,10};
    Coord p3 = {3,9}; 
    double a = distance(p1,p2)  , b = distance(p2,p3) , c = distance(p3,p1); 
    printf("area = %.2f\n",triangle(a,b,c)); 
    printf("area = %.2f\n", triangle_heron(p1,p2,p3)); 
    return 0;
}