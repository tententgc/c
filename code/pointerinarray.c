#include <stdio.h> 

void demo1(){ 
    int n =17 ; 
    int *p ; 
    p = &n ; 
    printf("%d\n", n); 
    printf("%d\n", *p); 
}
void demo2(){ 
    int n[]= {2, 4,10 } ;
    int *p[3] ;
    p[0] = &n[0] ; 
    p[1] = &n[1] ; 
    p[2] = &n[2] ;
    for (int i = 0; i < 3; i++) {
        printf("n[%d] = %d\n", i, n[i]); 
        printf("&n[%d] = %p\n", i, &n[i]); 
        printf("*p[%d] = %d\n", i, *p[i]);
        printf("p[%d] = %p\n", i, p[i]); 
} 
}


void  demo3(){ 
    char *s[] = {"illy","rose","julie","jasmine"};
    for(int i=0 ; i<4 ;i++){
        printf("%s\n", s[i]);
    } 
}
int main()
{ 
    // demo2();
    demo3(); 
    return 0; 
}