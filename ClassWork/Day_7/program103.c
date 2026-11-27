#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{
    int icnt =0;
    int iSum = 0;

    
    for(icnt = 1; icnt<=iNo/2 ; icnt++)
    {
      if((iNo % icnt )==0)
      {
        iSum = iSum+ icnt;
      }
    }
    return iSum;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
 
iRet = SumFactors(iValue);

    printf("sum of factor is :%d\n",iRet);


    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)