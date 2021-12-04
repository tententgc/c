#include <stdio.h> 

int main(){ 
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = 0,para; 
    int n = a;  
    for (int i = 0; i < b; i++)
    {
        sum += n; 
        (i == 0) ?printf("%d",n):printf("+%d",n);
        n = n + (a *10); 
        a = a * 10; 
    } 

    printf("=%d",sum); 
}