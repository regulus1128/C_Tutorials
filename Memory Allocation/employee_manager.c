/*
ABC PVT. LTD. manages employee records of other companies.
Employee ID can be of any length and it can contain any character.
For 3 employees, you have to take length of employee ID as input in a length int variable.
Then you have to take employee ID as an input and display it.
Store the Employee ID in a character array which is dynamically allocated.
You have to create only one character array.
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int length;

    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d: Enter length of your employee ID: ", (i+1));
        scanf("%d", &length);
        ptr = (char *)malloc((length + 1) * sizeof(char));
        printf("Enter your employee ID: ");
        scanf("%s", ptr);
        printf("Your Employee ID is: %s\n", ptr);
        free(ptr);
    }
    return 0;
}