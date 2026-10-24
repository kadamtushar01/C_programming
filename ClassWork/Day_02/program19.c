#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheackEven(int iNo)
{
     if((iNo % 2) == 0)
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
        int ivalue = 0;
        bool bRet = false;
        printf("Enter Number\n");
        scanf("%d",&ivalue);

     bRet = CheackEven(ivalue);

     if(bRet == true)
     {
        printf("It is Even\n");
     }

     else
     {
        printf("It is Odd\n");
     }

    return EXIT_SUCCESS;
}