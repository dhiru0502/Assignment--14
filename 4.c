#include<stdio.h>
int main()
{
    int a[10],i,gr=0;
    printf("Enter 10 numbers: ");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>gr)
            gr=a[i];
    }
    printf("Greatest number is %d",gr);
    return 0;
}
