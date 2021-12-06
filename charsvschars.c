#include <stdio.h>
#include <stdlib.h>

void display1(char *s[],char **t , size_t sz)
{
    printf("%p\n",s);
    printf("%p %p\n",&s[0],t+0);
    printf("%p %p\n",&s[1],t+1);  
    printf("%p  %p\n",s[0],*t);
    printf("%c %c\n",s[0][0],**t ); 
    printf("%p  %s\n",s[0],*t);
    printf("%p  %p\n",s[1], *(t+1)); 
    printf("%p  %s\n",s[1], *(t+1)); 
    for (int i = 0 ; i < sz ; i++)
    {
        printf("%p %p %c %s\n",&s[i],s[i],s[i][0],s[i]); 
    } 
} 

void demo1(){
     char *flower[]= {"lily", "rose", "tulip", "daffodil"};
     size_t sz =  sizeof(flower)/sizeof(flower[0]); 
     display1(flower,flower,sz); 
}

int main() { 
    demo1(); 
    return 0;
}