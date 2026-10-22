#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 5== 0) && (iValue % 3 ==0))
    {
        printf("Divisible By Both\n");
    }
    else if (iValue % 5 == 0)
    {
        printf("Divisible By 5 only\n");
    }
    else if (iValue % 3 ==0)
    {
        printf("Divisible By 3 only\n");
    }
    else if ((iValue % 5 !=0) &&(iValue % 3 !=0))
    {
        printf("Not Divisible By Either\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter The Number\n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}