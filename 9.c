#include<stdio.h>
int main()
{
    int a[10],i,n=0;
    printf("Enter values in array\n");
    for(i=0; i<10; i++)
    {
    scanf("%d",&a[i]);
    n++;
    }
    printf("Values are in reverse order: ");
    for(i=n-1; i>=0; i--)
        printf("%d ",a[i]);
    return 0;
}
