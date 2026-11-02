/*
    Function Name : ReactArea
    Description : It Calculate Area of Rectangle

    Input : float  , float
    OutPut : double
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

double ReactArea(float fWidth , float fHeight)
{
    double Area = 0.0;  
  
        Area = fWidth * fHeight;
    
    return Area;

}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width\n");
    scanf("%f",&fValue1);

    printf("Enter Height\n");
    scanf("%f",&fValue2);

    dRet = ReactArea(fValue1 , fValue2);

    printf("Area of Rectangle is :%lf\n",dRet);

    return EXIT_SUCCESS;
}