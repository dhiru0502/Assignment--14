#include<stdio.h>
int main()
{
    int a[10],i;
    float s=0,avg;
    printf("Enter 10 numbers: ");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=s/i;
    printf("Average is %.2f",avg);
    return 0;
}
