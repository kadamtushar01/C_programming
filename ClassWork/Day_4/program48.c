#include<stdio.h>
#include<stdlib.h>
int Maximum(int No1, int No2,int No3)
{
    if((No1> No2)  ||(No1>No3))
    {
        return No1;
    }
    else if ((No2> No1)  ||(No2>No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0 ,iValue3 = 0;
    int iResult =0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);
     
    printf("Enter Third Number\n");
    scanf("%d",&iValue3);
     
    
  iResult = Maximum(iValue1,iValue2,iValue3);
  printf("Maximum is :%d\n",iResult);

    return EXIT_SUCCESS;

}