#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(int iAge , float fMarks)
{
    
    if((fMarks > 75 ) && (fMarks < 100) && (iAge >=17))
    {
       printf("Eligible For Adimission\n");
    }
    else
    {
         printf("Not Eligible For Adimission\n");
    }
    
}
int main()
{
    int iAge = 0;
    float fMarks =0.0f;

    printf("Enter The Marks\n");
    scanf("%f",&fMarks);

    printf("Enter The Age\n");
    scanf("%d",&iAge);

    CheckAdmission(iAge , fMarks);

    return EXIT_SUCCESS;

}