#include<stdio.h>
#include<stdlib.h>

float Average(int No1, int No2,int No3)
{
    float fAns = 0.0f;

    //Typecasting
    fAns =( (float)No1 + (float)No2 +(float)No3)/3;
    return fAns;
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0 ,iValue3 = 0;
     float fResult =0.0f;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);
     
    printf("Enter Third Number\n");
    scanf("%d",&iValue3);
     
    
  fResult =  Average(iValue1,iValue2,iValue3);
  printf("Average is :%f\n",fResult);

    return EXIT_SUCCESS;

}