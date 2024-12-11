#include <stdio.h>

int main(){
    int dob, month;
    printf("Enter date of birth:\n");
    scanf("%d", &dob);
    printf("Enter month(use number e.g. 1 for Jaunuary, 2 for February etc.):\n");
    scanf("%d", &month);
    
    if (dob >= 22 && dob <= 31 && month == 12 || dob >= 1 && dob <= 19 && month == 1)
    {
        printf("Your zodiac sign is Capricorn\n");
    }
    else if (dob >= 20 && dob <= 31 && month == 1 || dob >= 1 && dob <= 17 && month == 2)
    {
        printf("Your zodiac sign is Aquarius\n");
    }
    else if (dob >= 18 && dob <= 28 && month == 2 || dob >= 1 && dob <= 19 && month == 3)
    {
        printf("Your zodiac sign is Pisces\n");
    }
    else if (dob >= 20 && dob <= 31 && month == 3 || dob >= 1 && dob <= 19 && month == 4)
    {
        printf("Your zodiac sign is Aries\n");
    }
    else if (dob >= 20 && dob <= 30 && month == 4 || dob >= 1 && dob <= 20 && month == 5)
    {
        printf("Your zodiac sign is Taurus\n");
    }
    else if (dob >= 21 && dob <= 31 && month == 5 || dob >= 1 && dob <= 20 && month == 6)
    {
        printf("Your zodiac sign is Gemini\n");
    }
     else if (dob >= 21 && dob <= 30 && month == 6 || dob >= 1 && dob <= 22 && month == 7)
    {
        printf("Your zodiac sign is Cancer\n");
    }
     else if (dob >= 23 && dob <= 31 && month == 7 || dob >= 1 && dob <= 22 && month == 8)
    {
        printf("Your zodiac sign is Leo\n");
    }
     else if (dob >= 23 && dob <= 31 && month == 8 || dob >= 1 && dob <= 22 && month == 9)
    {
        printf("Your zodiac sign is Virgo\n");
    }
     else if (dob >= 23 && dob <= 30 && month == 9 || dob >= 1 && dob <= 22 && month == 10)
    {
        printf("Your zodiac sign is Libra\n");
    }
     else if (dob >= 23 && dob <= 31 && month == 10 || dob >= 1 && dob <= 21 && month == 11)
    {
        printf("Your zodiac sign is Scorpio\n");
    }
     else if (dob >= 22 && dob <= 30 && month == 11 || dob >= 1 && dob <= 21 && month == 12)
    {
        printf("Your zodiac sign is Sagittarius\n");
    }
    else if (dob > 31 || month > 12)
    {
        printf("Invalid month or date!");
    }
    

    
    


}