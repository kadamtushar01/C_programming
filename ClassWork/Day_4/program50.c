#include<stdio.h>
#include<stdlib.h>
int Minimum(int No1, int No2,int No3,int No4)
{
    if((No1< No2)  &&(No1<No3) &&(No1 < No4))
    {
        return No1;
    }
    else if ((No2< No1)  &&(No2<No3) && (No2 < No4))
    {
        return No2;
    }
     else if ((No3< No1)  &&(No3<No2) && (No3 < No4))
    {
        return No3;
    }
    else
    {
        return No4;
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0 ,iValue3 = 0, iValue4 = 0;
    int iResult =0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);
     
    
    printf("Enter Third Number\n");
    scanf("%d",&iValue3);

    printf("Enter Fourth Number\n");
    scanf("%d",&iValue4);
     
    
  iResult = Minimum(iValue1,iValue2,iValue3,iValue4);
  printf("Minimum is :%d\n",iResult);

    return EXIT_SUCCESS;

}