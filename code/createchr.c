#include <stdio.h>


void demo(){
     char flower[] = "tulip"; 
     printf("%s (address = %p) \n", flower, flower);  
}

void demo2(){ //can not change later 
    char *flower = "tulip"; 
    printf("%s (address = %p) \n", flower, flower); 
    while (*flower){
        printf("%c", *flower); 
        flower++;
    }
}
int main()
{
    demo(); 
    demo2(); 

    return 0; 
}