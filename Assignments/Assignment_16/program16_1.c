#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iCol)
{
    char ch = '\0';
    int i = 0;
     int j = 0;

    for(i = 1;i <=iRow ; i++)
    {
        for(j = 0 ;j <iCol ; j++)
        {
            printf("%c\t",'A'+j);
        }
         printf("\n");
    }
   
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter Number Of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Cols\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}