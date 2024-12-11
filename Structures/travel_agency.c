#include <stdio.h>
/* WAP to make a travel agency system in which drivers input the following details:
name, driving license number, route, kilometres
take n as an input where n is the number of drivers */
struct travel_agency
{
    char name[100];
    int driving_license_no;
    int kms;
    char route[100];
};

int main()
{
    int n;
    printf("***** Welcome to ABC Travel Agency! *****\n");
    printf("We store information of various drivers from all around the world!\n");
    printf("-----------------------------------------------------------------\n\n");
    printf("Enter total number of drivers: ");
    scanf("%d", &n);
    struct travel_agency drivers[n];

    // taking input from the drivers
    for (int i = 0; i < n; i++)
    {
        printf("Driver %d, welcome!\n", (i + 1));
        printf("Please enter your name: ");
        scanf("%s", drivers[i].name);
        // getchar();
        // fgets(drivers[i].name, 100, stdin);
        printf("Enter your driving license number: ");
        scanf("%d", &drivers[i].driving_license_no);
        printf("Enter distance travelled by your vehicle: ");
        scanf("%d", &drivers[i].kms);
        printf("Enter your route: ");
        scanf("%s", drivers[i].route);

        // getchar();
        // fgets(drivers[i].route, 100, stdin);
        printf("Thanks! Next one please!\n");
    }

    // printing the data
    for (int i = 0; i < n; i++)
    {
        printf("\nDetails of driver %d:\n", (i + 1));
        printf("Name: %s\n", drivers[i].name);
        printf("Driving license number: %d\n", drivers[i].driving_license_no);
        printf("Distance travelled(in kms): %d\n", drivers[i].kms);
        printf("Route: %s\n", drivers[i].route);
        printf("\n");
    }

    return 0;
}