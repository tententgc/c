#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strtag (char *s,char *tag){ 
    char tmp[500]; 
    sprintf(tmp,"<%s>%s</%s>",tag,s,tag); 
}
char *strtag2 (char *dest,char *s,char *tag){ 
    char tmp[500]; 
    sprintf(dest,"<%s>%s</%s>",tag,s,tag);
    return dest; 
}


char *strtag3 (char *s,char *tag){ 
    char tmp[500]; 
    sprintf(tmp ,"<%s>%s</%s>",tag,s,tag);
    char *dest = (char * ) malloc(strlen(tmp)+1); // +1 for the null-terminator  
    strcpy(dest,tmp); // put tmp to dest 
    return dest; 
}

int main(){
    // strtag("title","h1");
    // char *str  = strtag("title","h1"); 
    // printf("%s\n",str); 
    char dest[500]="" ;
    char *str  = strtag2(dest,"title","h1"); 
    printf("stack =  %s\n",str);

    char *str3 = strtag3("title","h1"); 
    printf("heap = %s\n",str3);
    free(str3); // delete str3 because it is in heap 
    return 0; 

}