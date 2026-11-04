#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart , int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd ; iCnt>=iStart ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    if(iStart > iEnd)
    {
        printf("Invalid Input\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter end point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}