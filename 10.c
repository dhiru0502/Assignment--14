#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("Enter values in array\n");
    for(i=0; i<10; i++)
       scanf("%d",&a[i]);
    for(i=0; i<10; i++)
        b[i]=a[i];
    printf("Copy of element in array is: ");
    for(i=0; i<10; i++)
        printf("%d ",b[i]);
    return 0;
}
