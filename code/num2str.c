#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#include <string.h>
#include <math.h> 

void demo()
{ 
    int n = 7; 
    double d = 3.24;
    char s[20] = ""; 
    sprintf(s, "%3d", n); 
    printf("%s\n", s);
}
char *gephin (char *pin)
{
    sprintf(pin, "%d", rand()%10000); 
     return pin;
}

char *genpin(char *pin , char len){
    char fmt[100] =  "";
    sprintf(fmt, "%%0%dd", len);
    sprintf(pin, fmt, rand()% (int) pow(10,len)); 
    return pin; 
}
int main()
{
    char pin[20] = "";
    srand(time(NULL));   
    for (int i = 0; i < 10; i++)
    { 
    printf("%s\n",genpin(pin ,6)); 
    }

    return 0;
} 