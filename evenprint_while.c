#include<stdio.h>
// Program to print even numbers upto 'n'
// 'n' - user defined input
void main()
{
    int a,n;
    printf("\n\nEnter a number\n");
    scanf("%d",&n);
    a=0;
    while(a<=n)
    {
        printf("%d",a);
        a=a+2;
    }
}
