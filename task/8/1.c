#include  <stdio.h> 
#include  <math.h> 

int main(){ 
    int n;
    scanf("%d", &n); 
    for(int i=0 ; i<n;i++){
        int q;
        scanf("%d", &q); 
        (q>1000) || (q<0) ? printf("%d\n", 0) : printf("%d\n", (int)sqrt(q));
    }
}