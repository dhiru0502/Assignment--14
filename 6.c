#include<stdio.h>
int main()
{
    int a[10];
    int i,j,temp;
    printf("Enter 10 numbers.\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<9; i++)
    {
        for(j=i; j<10; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorting value is: ");
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
    return 0;
}
