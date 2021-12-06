#include <stdio.h> 

char *zodiac(int y ){
    char *zodiac[] = {"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"};
    return zodiac[y%12]; 
}
int main(){ 
    int month ;
    printf("Enter your birth month: "); 
    scanf("%d", &month);
    printf("Your zodiac sign is %s", zodiac(month));
    return 0; 
}