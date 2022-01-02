#include <stdio.h> 

void demo(){
    char d; 
    scanf("%c", &d);
    switch(d){
        case 'a':
            printf("a");
            break;
        case 'b':
            printf("b");
            break;
        case 'c':
            printf("c");
            break;
        default:
            printf("default");
            break;
    }
}

int main(){
    demo();
} 
