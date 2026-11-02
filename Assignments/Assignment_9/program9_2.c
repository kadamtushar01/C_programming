/*
    Function Name : DollerToINR
    Description : It Displays indian currancy

    Input : Int 
    OutPut : int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iRs = 0;

        iRs = iNo * 70;
    
    return iRs;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of USD\n");
    scanf("%d",&iValue);

   iRet = DollarToINR(iValue);

   printf("Value of iRs is :%d",iRet);

    return EXIT_SUCCESS;
}