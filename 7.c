#include<stdio.h>
int main()
{
    int a[10];
    int i,largest,s_largest=-999999;
    printf("Enter 10 numbers.\n");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    largest=a[0];
    for(i=0; i<9; i++)
    {
            if(largest < a[i+1])
            {
                s_largest=largest;
                largest= a[i+1];
            }
            else
            {
                if(s_largest < a[i+1])
                   s_largest=a[i+1];
            }
    }
    printf("second largest number is %d ",s_largest);
    return 0;
}
