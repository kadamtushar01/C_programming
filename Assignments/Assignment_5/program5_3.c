#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if((fMarks <100) && (fMarks >90))
    {
       printf("Grade A\n"); 
    }
    else if ((fMarks <89) && (fMarks > 75))
    {
        printf("Grade B\n");
    }
    else if ((fMarks < 74) && (fMarks > 60))
    {
         printf("Grade C\n");
    }
    else if ((fMarks < 59) && (fMarks > 40))
    {
         printf("Grade D\n");
    }
    else if (fMarks < 40)
    {
         printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter The Marks\n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}