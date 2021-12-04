#include <stdio.h>

typedef struct {
    double price; 
    double vat;
} pricetype; 

pricetype pricepart2(double totalprice) {
    pricetype p; 
    p.vat = totalprice * 7.0 / 107.0 ; 
    p.price = totalprice - p.vat;
    return p; 
}

void pricePart(double totalprice , double *price ,double *vat){
    *vat = totalprice * 7.0 / 107;
    *price = totalprice - *vat;
}

int main(){ 
    double totalprice,price,vat;
    totalprice = 107; 
    pricePart(totalprice,&price,&vat);
    printf("total price = %.2f , price =  %.2f  , vat  = %.2f\n",totalprice,price,vat); 
    
    
    
    pricetype p = pricepart2(totalprice); 
    printf("total price = %.2f , price =  %.2f  , vat  = %.2f\n",totalprice,p.price,p.vat); 
    return 0; 
}