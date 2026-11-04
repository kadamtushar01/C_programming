#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
        if(iStart > iEnd)
        {
            printf("Invalid Input\n");
        }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Start point\n");
    scanf("%d",&iValue1);

    printf("Enter End Point\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}