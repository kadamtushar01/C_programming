#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(iNo % 5 ==0)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Number is not divisible by 5");
    }
}

int main()
{
    int iValue =0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}