#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>
#include <math.h>
#define STR_LENGTH 100 
struct Books{ 
    char bookname[STR_LENGTH];
    char author[STR_LENGTH];
    char isbn[20]; 
    int price;
};

void showdetails(struct Books manybooks[10],int n ){
    for(int i = 0; i < n; i++){
        printf("Bookname is %s\n", manybooks[i].bookname);
        printf("Author is %s\n", manybooks[i].author);
        printf("ISBN is %s\n", manybooks[i].isbn);
        printf("Price is %d\n", manybooks[i].price);
    }
} 
int main(){
    struct Books manybooks[10]; 
    static int n; 
    printf("Enter the number of books: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Enter the name of the book: ");
        scanf("%s", manybooks[i].bookname);
        printf("Enter the name of the author: ");
        scanf("%s", manybooks[i].author);
        printf("Enter the ISBN: ");
        scanf("%s", manybooks[i].isbn);
        printf("Enter the price: ");
        scanf("%d", &manybooks[i].price);
    }
    printf("\nThe books are: ");
    showdetails(manybooks,n); 
    return 0;
}

