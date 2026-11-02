/*
    Function Name : TableRev
    Description : It Displays Reverse Table

    Input : Int
    OutPut : Int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10 ; iCnt>=1 ; iCnt--)
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

    TableRev(iValue);

    return EXIT_SUCCESS;
}