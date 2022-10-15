#include<stdio.h>
int main()
{
    int a[10];
    int i,smallest,s_smallest;
    printf("Enter 10 numbers.\n");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    smallest=a[0];
    s_smallest=a[1];
    for(i=0; i<9; i++)
    {
            if(smallest > a[i+1])
            {
                s_smallest=smallest;
                smallest= a[i+1];
            }
            else
            {
                if(s_smallest > a[i+1])
                   s_smallest=a[i+1];
            }
    }
    printf("second smallest number is %d ",s_smallest);
    return 0;
}
