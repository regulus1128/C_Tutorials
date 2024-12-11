#include <stdio.h>

int main(){
    float height, weight, bmi;
    printf("Enter your height(in metres):\n");
    scanf("%f", &height);
    printf("Enter your weight(in kg):\n");
    scanf("%f", &weight);
    bmi = (weight) / (height*height);

    if (bmi < 15)
    {
        printf("Your BMI is %0.2f and your BMI category is starvation\n", bmi);
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Your BMI is %0.2f and your BMI category is anorexic\n", bmi);
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Your BMI is %0.2f and your BMI category is underweight\n", bmi);
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Your BMI is %0.2f and your BMI category is ideal\n", bmi);
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("Your BMI is %0.2f and your BMI category is overweight\n", bmi);
    }
    else if (bmi >= 30.0 && bmi <= 39.9)
    {
        printf("Your BMI is %0.2f and your BMI category is obese\n", bmi);
    }
    else if (bmi >= 40.0)
    {
        printf("Your BMI is %0.2f and your BMI category is morbidly obese\n", bmi);
    }

}