#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1,int iSide2,int iSide3)
{
        if(((iSide1 + iSide2) > iSide3) ||(iSide1+iSide3 > iSide2) || (iSide2+iSide3 > iSide1))
    {
       printf("Valid Tringle\n");
    }
     else 
    {
     printf("Invalid Tringle\n");
    }
    
    
}
int main()
{
    int iSide1=0, iSide2 = 0, iSide3 =0;

    printf("Enter First Sides\n");
    scanf("%d",&iSide1);

    printf("Enter Second Sides\n");
    scanf("%d",&iSide2);
    
    printf("Enter Third Sides\n");
    scanf("%d",&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;

}