/*
    Function Name : FactorialDiff
    Description : It Displays Even And Odd Factorial Difference

    Input : Int 
    OutPut : Int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int EvenFact = 0;
    int OddFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    EvenFact = 1;
    OddFact = 1;
    for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
    {
       if ((iCnt % 2) == 0)
        {
            EvenFact = EvenFact * iCnt;
        }
        else
        {
            OddFact = OddFact * iCnt;
        }
    } 

    return EvenFact - OddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

   iRet = FactorialDiff(iValue);

   printf("Factorial Difference is :%d",iRet);

    return EXIT_SUCCESS;
}