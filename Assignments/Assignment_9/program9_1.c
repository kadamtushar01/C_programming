/*
    Function Name : Display
    Description : It Displays Pattern

    Input : Int
    OutPut : int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
    {
        printf("*\t");
    }
     for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
    {
        printf("#\t");
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