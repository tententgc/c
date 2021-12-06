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
    char *dest = (char * ) malloc(strlen(tmp)+1); // จอง memory เพื่อเก็บค่า tmp เป็นตัวแปร dest
    strcpy(dest,tmp); // เอา tmp ไปใส่ dest 
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
    free(str3); // ลบตัวแปร str3 ทิ้ง  เพราะเป็นตัวแปรที่ถูกจัดสรรโดย malloc ต้องลบทุกครั้งไม่งั้นจะโดนจองเม็ม 
    return 0; 

}