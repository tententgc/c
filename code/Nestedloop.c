#include<stdio.h> 

int main(){
     int i,j,n; 
     for(i=1 ; i<=12 ; i++){
         for(j=1 ; j<=12 ; j++){
             n=i*j;
             printf("%d*%d=%d\n",i,j,n);
         }
     }
}