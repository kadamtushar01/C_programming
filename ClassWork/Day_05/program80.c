
#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int icnt = 0;
    int isum = 0;

    for(icnt = 1; icnt<= iNo; icnt++)
    {
        isum = isum + icnt;
   
    }

    return isum;
}

int main()
{
    int iValue = 0;
    int iRate = 0;

    printf("enter the Frequency \n");
    scanf("%d\t ", &iValue);

  iRate = Summation(iValue);

  printf("Summation is :%d",iRate);

    return EXIT_SUCCESS;
}