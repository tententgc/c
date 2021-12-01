#include <stdio.h> 

int gcd(int a, int b) {
    int min = a < b ? a : b; 
    for (int i = min; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
}
int gcdeuclid(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
 
int main()
{
    int a=9, b=21; 
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    printf("GCD of %d and %d is %d\n", a, b, gcdeuclid(a, b));
    return 0 ; 
}