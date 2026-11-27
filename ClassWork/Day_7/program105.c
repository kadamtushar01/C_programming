#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Checkperfect(int iNo)
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
      return true;
   }
   else
   {
    return false;
   }
}

int main()
{
    int iValue =0;
    int iRet = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
 
bRet =  Checkperfect(iValue);

  if(bRet == true)
  {
    printf("it is perfect No\n");
  }
  else
  {
    printf("It is Not a perfect No\n");
  }
  


    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)