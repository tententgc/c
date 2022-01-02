#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 
#include <math.h> 

int main (){ 
        int n= 0 ; 
        while (n != -1)
        { 
            scanf("%d", &n);
            if (n != -1){ 
            int WorkBee =  1,MomBee = 1 ,SoilderBee = 0 , AllBee = 0 ; 
                for (int i = 0 ; i< n ;i++){
                    AllBee = 1 +WorkBee+SoilderBee;
                    int temp = WorkBee;
                    WorkBee = AllBee; 
                    SoilderBee = temp; 
                }
            printf("%d %d\n",WorkBee, AllBee + SoilderBee +1);
            }
        }
}
