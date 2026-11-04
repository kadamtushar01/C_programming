#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int iDigit = 0;
    int Count = 0;

    while(iNo != 0)
    {
        iDigit = iNo% 10;
        iNo = iNo/10;
        if(iDigit < 6)
        {
            Count++;
        }
    }

    return Count;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("Frequency  is :%d\n",iRet);

    return EXIT_SUCCESS;
}