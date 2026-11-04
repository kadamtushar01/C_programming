#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
     int iSum2 = 0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo% 10;
        iNo = iNo/10;
        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
         else if(iDigit % 2 == 1)
        {
            iSum2 = iSum2 + iDigit;
        }
    }

    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference is :%d\n",iRet);

    return EXIT_SUCCESS;
}