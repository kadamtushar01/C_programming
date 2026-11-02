/*
    Function Name : EvenFactorial
    Description : It Displays EvenFactorial

    Input : Int
    OutPut : Int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int Fact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    Fact = 1;
    for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
    {
       if ((iCnt % 2) == 0)
        {
            Fact = Fact * iCnt;
        }
    } 

    return Fact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

   iRet = EvenFactorial(iValue);

   printf("Even Factorial of Number :%d",iRet);

    return EXIT_SUCCESS;
}