#include <stdio.h> 

int main(){
    int n[]= {153,154,167, 186, 156}; 
    char gender[]={'M','F','M','F','F'}; 
    double sumM= 0, avgM=0;
    double sumF= 0, avgF=0; 
    int cM=0  ,cF= 0; 
    double avg= 0,sum=0; 
    for (int i=0; i<5; i++){
        sum += n[i];
        if (gender[i]=='M'){
             sumM += n[i];
             cM++;
        }else{ 
            sumF += n[i];
            cF++; 
        }
    } 
    avgM = sumM/cM; 
    avgF = sumF/cF; 
    avg = sum/5; 
    printf("The average of the array is %.2f\n", avg); 
    printf("%.2f\n", avgM);
    printf("%.2f\n", avgF);
    return 0; 
}