#include <stdio.h>

int main(){
    int hrdns, tensile_strgh;
    float cc;
    printf("Enter hardness of the steel\n");
    scanf("%d", &hrdns);
    printf("Enter tensile strength of the steel\n");
    scanf("%d", &tensile_strgh);
    printf("Enter carbon content of the steel\n");
    scanf("%f", &cc);

    if (hrdns > 50 && cc < 0.7 && tensile_strgh > 5600)
    {
        printf("The grade of the steel is 10\n");
    }
    else if (hrdns > 50 && cc < 0.7)
    {
        printf("The grade of the steel is 9\n");
    }
    else if (cc < 0.7 && tensile_strgh > 5600)
    {
        printf("The grade of the steel is 8\n");
    }
    else if (hrdns > 50 && tensile_strgh > 5600)
    {
        printf("The grade of the steel is 7\n");
    }
    else if (hrdns > 50 || cc < 0.7 || tensile_strgh > 5600)
    {
        printf("The grade of the steel is 6\n");
    }
    else{
        printf("The grade of the steel is 5\n");

    }
    
    

}