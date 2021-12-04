#include <stdio.h> 

void demo1(){
    char grade[4] = {'A', 'B', 'C', 'D'}; 
    printf("%c\n", grade[0]);
}
void demo3(){
     char grade[]="ABCD";
    printf("%c\n", grade[3]);
}
int main(){
     demo1();
     demo3(); 
     
}