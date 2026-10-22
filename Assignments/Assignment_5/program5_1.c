#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst ,int iSecond , int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("Greater Number is : %d\n",iFirst);
    }
    else if ((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("Greater Number is : %d\n",iSecond);
    }
    else if ((iThird >= iFirst) && (iThird >= iSecond))
    {
        printf("Greater Number is : %d\n",iThird);
    }
    else 
    {
         printf("Greater Number is : %d\n",iFirst);
    } 
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number\n");
    scanf("%d",&iValue3);

    FindGreatest(iValue1 , iValue2 , iValue3);

    return EXIT_SUCCESS;
}