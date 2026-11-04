#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Enter Your Name\n");
    scanf("%[^\n]",&Name);

    printf("Your Name is :%s\n",Name);

    return EXIT_SUCCESS;
}