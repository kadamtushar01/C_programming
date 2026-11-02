/*
    Function Name : Pattern
    Description : It Displays Pattern

    Input : Int
    OutPut : Int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo <0)
    {
        iNo = -iNo;
    }
        for(iCnt = 1 ; iCnt <=iNo ;iCnt++)
        {
            printf("$\t*\t");
        }
        printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}