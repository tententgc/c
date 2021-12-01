#include <stdio.h> 

void asciitable(){
     for (char c = 'A';c <= 'Z';c++){
         printf("%c %d\n",c,c);
     } 
} 
int main(){
    char c1; 
    c1 = 'A'; 
    char c2 = 'B';
    char c3;
    c3 = 'A'+2; //aschii convert code to ch
    asciitable();
}
