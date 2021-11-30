#include <stdio.h>

void demo_str(){ 
    char *str = "rainbow"; 
    printf("%s\n", str); 
    printf("%10s\n", str); 
    printf("%-10s\n", str);
    printf("%.4s\n", str);
    printf("%.*s\n",4, str);
}
void demo_addr() { 
    int i = 10 ;
    printf("i = %d (%p)\n", i, &i);
    char *str = "rainbow"; 
    printf("str = %s (%p)\n", str, *str);
}
int main()
{
    // demo_str();
    demo_addr();
   return 0;
}