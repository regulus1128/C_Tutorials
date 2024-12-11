#include <stdio.h>

int main(){
    float dist;
    printf("Enter the distance between A and B:\n");
    scanf("%f", &dist);
    // dist_cm = dist * 100000;
    // dist_mtr = dist * 1000;
    // dist_mm = dist * 1000000;
    // dist_ft = dist * 3280.84;

    printf("The distance (in cm) is %f centimetres.\n", dist * 100000);
    printf("The distance (in m) is %f metres.\n", dist * 1000);
    printf("The distance (in mm) is %f millimetres.\n", dist * 1000000);
    printf("The distance (in ft) is %f feet.\n", dist * 3280.84);
    printf("The distance (in inches) is %f inches.\n", dist * 39370.079);


    return 0;


}