#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst , int iSecond)
{
    if(iFirst > iSecond)
    {
         printf("Greater Number is : %d\n",iFirst);
    }
    else if (iSecond > iFirst)
    {
         printf("Greater Number is : %d\n",iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the First Number\n");
    scanf("%d",&iValue1);

     printf("Enter the Second Number\n");
    scanf("%d",&iValue2);

    FindGreater(iValue1 ,iValue2);

    return EXIT_SUCCESS;
}