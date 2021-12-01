#include <stdio.h> 
#include <stdbool.h>

int leapyear(int year){
    int r;
    r = year % 4;
    if (r == 0)
        return 1;
    else
        return 0;
}
bool isOdd(int n){
    return n%2==0 ? 1 : 0;
}

int main(){
    int isLeapyear = leapyear(2000); 
    char *q = isLeapyear ? "leapyear" : "not leapyear"; 
    printf("%s", q);
}