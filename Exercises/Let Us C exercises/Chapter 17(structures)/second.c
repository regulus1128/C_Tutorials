#include <stdio.h>

struct bank
{
    int acc_no;
    char name[25];
    int balance;
};

struct bank b[3];
void details();
void display();
void inputData();
void withdrawdeposit();

int main()
{
    inputData();
    display();
    details();
    withdrawdeposit();
    return 0;
}

void inputData()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter account number of customer %d:\n", i);
        scanf("%d", &b[i].acc_no);
        printf("Enter name of customer %d:\n", i);
        scanf("%s", b[i].name);
        printf("Enter balance of customer %d:\n", i);
        scanf("%d", &b[i].balance);
        printf("\n");
    }
}
void display()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("The details of customer %d:\n", i);
        printf("Account number: %d\n", b[i].acc_no);
        printf("Name: %s\n", b[i].name);
        printf("Balance: %d\n", b[i].balance);
        printf("\n");
    }
}

void details()
{
    printf("Customers having balance less than 100:\n");
    for (int i = 1; i <= 3; i++)
    {
        if (b[i].balance < 100)
        {
            printf("Name: %s\t Account no: %d\n", b[i].name, b[i].acc_no);
        }
        // if(j == 0)
        // {
        //     printf("No such customers found!\n");
        // }
    }
}
void withdrawdeposit()
{
    int prompt1, prompt2, dep, witd;
    for (int i = 1; i <= 3; i++)
    {
        printf("%s, do you want to withdraw or deposit money? (Press 1 for yes, 0 for no)\n", b[i].name);
        scanf("%d", &prompt1);
        if (prompt1 == 1)
        {
            printf("Press 1 for deposit, 0 for withdrawal. ");
            scanf("%d", &prompt2);
            if (prompt2 == 1)
            {
                printf("Enter amount: ");
                scanf("%d", &dep);
                printf("You have successfully deposited %d on your account!\n", dep);
                printf("Your balance is %d\n", b[i].balance + dep);
            }
            else if (prompt2 == 0)
            {
                if (b[i].balance < 100)
                {
                    printf("You have insufficient funds for withdrawal!\n");
                }
                else
                {
                    printf("Enter amount: ");
                    scanf("%d", &witd);
                    if (witd > b[i].balance)
                    {
                        printf("Error! You do not have enough balance to make this withdrawal!\n");
                    }
                    else
                    {
                    printf("You have successfully withdrawn %d from your account!\n", witd);
                    printf("Your balance is %d\n.", b[i].balance - witd);
                    }
                }
            }
        }
        else if (prompt1 == 0)
        {
            printf("Thank you for using our software!\n");
            continue;
        }
    }
}