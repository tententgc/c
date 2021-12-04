#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int sumdigit(char *s){
     int sum = 0; 
     for (int i = 0 ; i < strlen(s); i++){
          sum += s[i] - '0';  // convert str num to int 
     }
     return sum ;
}
void nicePlate(int FromNum, int ToNum){
    for (int i = FromNum ; i <= ToNum ; i++){
        char s[5];
        int sum; 
        sprintf(s,"%d",i); // convert int to str put in s 
        sum = sumdigit(s); 
        if (sum==9){
             printf("nice plate = %s , sum = %d\n",s,sum); 
        }
    }
}
int main(){
    char plate[] = "4711"; 
    // int a =  '7' - '0'  + 2 ;
    // printf("%d %c\n",'7','7');
    // printf("%d", a);  

    nicePlate(8000,9999);
    return 0; 
}