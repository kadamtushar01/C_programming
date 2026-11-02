/*
    Function Name : Display
    Description : It Displays Numbers

    Input : Int
    OutPut : Int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

        for(iCnt = 1 ; iCnt <=iNo ;iCnt++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}