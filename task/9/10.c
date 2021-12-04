#include <stdio.h>

int main()
{
    int year, month, n;
    scanf("%d,%d", &year, &month);
    n = (month == 2 && year % 4 == 0) ? 29 : 
    (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) ? 31
    : (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 0;
    (n != 0) ? printf("%d", (int)n) : printf("none");
}