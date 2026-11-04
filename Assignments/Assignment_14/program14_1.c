#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int Multi = 1;
    int iCnt = 0;

    for(iCnt = 1 ; iCnt < iNo ;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            Multi = Multi * iCnt;
        }
    }
    return Multi;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of Factor is :%d\n",iRet);

    return EXIT_SUCCESS;
}