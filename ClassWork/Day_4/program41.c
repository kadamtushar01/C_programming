#include<stdio.h>
#include<stdlib.h>

void Maximum(int No1, int No2)
{
    
    if(No1 > No2)
    {
        printf("Maximum is :%d\n",No1);
    }
    else
    {
       printf("Maximum is :%d\n",No2);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    Maximum(iValue1,iValue2);

    return EXIT_SUCCESS;

}