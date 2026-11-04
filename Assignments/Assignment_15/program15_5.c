#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1 , int iNo2 )
{
    float per = 0.0f;

        per = ((float)iNo2 / iNo1) * 100;

    return per;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0;

    printf("Enter Total Marks\n");
    scanf("%d",&iValue1);

    printf("Enter Obtained MArks\n");
    scanf("%d",&iValue2);


    fRet = Percentage(iValue1 , iValue2);

    printf("Percentage is :%.2f",fRet);

    return EXIT_SUCCESS;
}