#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//how many this word in string
int how_many(char *s, char *t )
{
	printf("%s    %s\n", s, t);
	char c[100];
	char d[100];
	int count = 0;
	char *p = strstr(s,t);
	while (p != NULL)
	{
		count++;
		p = strstr(p + 1, t);
	}
	return count;
}

int main()
	{
		char s[100];
		char g[100];
		char *t;

		printf("Enter string: ");
		gets(s);
		t = strtok(s, " ");
		while (t != NULL)
		{
			printf("%s\n", t);
			printf("%s: %d\n", t, how_many(s, t));
			t = strtok(NULL, " ");
		}
		return 0;
}