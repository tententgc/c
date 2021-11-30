#include <stdio.h>

int demo1()
{
     int a = 10, b = 7;
     int max;
     max = (a > b) ? a : b;
     printf("%d\n", max);
}

int max(int a, int b)
{
     return a > b ? a : b;
}
void ch()
{
     char *q = "spiderman";
     printf("%s\n", q);
}
int demo2()
{
     int age = 40;
     int ticket;
     ticket = age < 5 || age > 50 ? printf("ticket = 0 ") : printf("ticket = 50 ");
}
int main()
{
     // demo1();
     demo2();
     return 0;
}