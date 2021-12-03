#include <stdio.h>

void pricePart(double totalPrice , double *price , double *vat){ 
    *price = totalPrice / 1.2;
    *vat = totalPrice - *price;
}


int main()
{
    double totalPrice,price, vat;
    pricePart(totalPrice, &price, &vat);
    return 0; 
}