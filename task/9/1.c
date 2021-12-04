#include <stdio.h>
#include <string.h>

int main()
{
    int count[] = {0, 0, 0, 0, 0};
    int n = 0;
    char *c;
    gets(c);
    int size = strlen(c);
    for (int i = 0; i < size; i += 2)
    {
        int a = c[i] - '0';
        count[a]++;
    }
    printf("%d %d %d %d %d", count[0], count[1], count[2], count[3], count[4]);
}