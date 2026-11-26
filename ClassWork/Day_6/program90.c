#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int icnt =0, iSum = 0;
    
    for(icnt = 1;icnt<=iNo;icnt++)
    {
       iSum = iSum+icnt;
    }
    return iSum;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
 
   iRet =  Summation(iValue);

   printf("summation is : %d\n",iRet);
    


    return EXIT_SUCCESS;
}