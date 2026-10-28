#include<stdio.h>
#include<stdlib.h>

int Maximum(int No1, int No2)
{
    
    if(No1 > No2)
    {
       return No1;
    }
    else
    {
      return No2;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);
     
    
  iResult =  Maximum(iValue1,iValue2);
  printf("Maximum Number is :%d\n",iResult);

    return EXIT_SUCCESS;

}