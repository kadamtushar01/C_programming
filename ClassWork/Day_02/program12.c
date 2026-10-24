#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int No1 = 0;

    printf("Enter Number :\n");
    if (scanf("%d",&No1) !=1)
    {
        fprintf(stderr,"invalid Input\n");

        return EXIT_FAILURE;
    }

    printf("Input is VAlid\n");

    return EXIT_SUCCESS;
}