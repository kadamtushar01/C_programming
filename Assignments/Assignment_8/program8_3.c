/*
    Function Name : Factorial
    Description : It Displays factorial

    Input : Int 
    OutPut : Int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo <0)
    {
        iNo = -iNo;
    }
    
    iFact = 1;
    for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is :%d",iRet);

    return EXIT_SUCCESS;
}