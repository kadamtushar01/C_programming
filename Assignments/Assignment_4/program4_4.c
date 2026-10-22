#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge > 18)
    {
         printf("Eligible to Vote");
    }
    else if (iAge < 0)
    {
        printf("Invalid Age");
    }
    else
    {
        printf("Not Eligible to Vote");
    }
    
}

int main()
{
    int iAge = 0;

    printf("Enter the Age\n");
    scanf("%d",&iAge);

    
    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}