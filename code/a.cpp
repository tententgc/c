#include <bits/stdc++.h>
using namespace std; 

int n; 
int main() 
{ 
    cin >> n;
    if (n == 1)
    {
        printf("%.6f", (float)2);
    }
    else if (n % 2 == 0)
    {
        printf("%.6f", (float)n);
    }
    else if (n == 3)
    {
        printf("%.6f", (float)2 + sqrt(3));
    }
    else
    {
        printf("%.6f", (float)n - 3 + 2 * sqrt(3));
    }
}