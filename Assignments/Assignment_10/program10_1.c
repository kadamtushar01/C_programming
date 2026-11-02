/*
    Function Name : CircleArea
    Description : It Calculate Area of Circle

    Input : float 
    OutPut : double
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double Area = 0.0;
    float PI = 0.0f;
   
    PI = 3.14;

     Area = PI * fRadius * fRadius;
    
    return Area;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is :%lf\n",dRet);

    return EXIT_SUCCESS;
}