#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
    int Multi=0;

    Multi = iNo1 * iNo2 * iNo3;

    return Multi;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number\n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1 , iValue2,iValue3);

    printf("multiplication is :%d",iRet);

    return EXIT_SUCCESS;
}