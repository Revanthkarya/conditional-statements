#include<stdio.h>
void main()
{
    int ch;
    printf("enter the value either 1 or 0:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0:
        printf("2\n");
        break;
    case 1:
        printf("3\n");
        break;
    default:
        printf("Using a default case 1:3\n");

    }
    return 0;
}
