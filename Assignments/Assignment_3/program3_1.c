#include<stdio.h>

void printEven(int iNo)
{
    int iCnt = 0;
    int digit = 0;

    if(iNo <= 0)
    {
        return ;
    }
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {   
        digit = iCnt*2;
        printf("%d\n",digit);
    }
}
int main()
{
    int iValue = 0;
   
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0 ;
}