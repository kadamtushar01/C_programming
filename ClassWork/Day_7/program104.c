#include<stdio.h>
#include<stdlib.h>

void Checkperfect(int iNo)
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

   if(iSum == iNo)
   {
    printf("it is perfect no\n");
   }
   else
   {
    printf("it is not a perfect no \n");
   }
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
 
  Checkperfect(iValue);


    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)