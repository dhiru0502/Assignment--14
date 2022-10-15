#include<stdio.h>
int main()
{
    int a[10],i,sm;
    printf("Enter 10 numbers: ");
    for(i=0; i<=9; i++)
        scanf("%d",&a[i]);
    sm=a[0];
    for(i=1; i<=9; i++)
    {
        if(sm>a[i])
            sm= a[i];
    }
    printf("Smallest number is %d",sm);
    return 0;
}
