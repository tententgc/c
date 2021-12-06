#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void  demo_aton(){
     char *s  =  "127"; 
     int i = atoi(s); 
    printf("%d\n", i);
    double d  = atof("-32.5546");
    printf("%f\n", d); 
}

void demo_strton(){
    char *s  = "34.234234234"; 
    double d = strtod(s, NULL); //atof(s); recommended 
    printf("%f\n", d); 
}

void demo_strton2(){
    char *s  = "170lbs";
    char *p; 
    double d = strtod(s, &p); 
    printf("%.2f\n", d); 
    printf("%s\n", p); 
    if (strcasecmp(p, "kg") == 0) { // check if the unit is kg 
        printf("%.2f %s  = %.2f lbs\n", d,p,d*2.2); 
    } else {
        printf("%.2f %s  = %.2f kg\n", d,p,d/2.2); 
    } 

} 

int main()
{
    demo_aton(); 
    demo_strton(); 
    demo_strton2(); 
    return 0; 
}