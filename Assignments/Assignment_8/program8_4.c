/*
    Function Name : Table
    Description : It Displays Table

    Input : Int
    OutPut : Int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt<=10 ; iCnt++)
    {
        i = iCnt * iNo;
        printf("%d\t",i);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}