#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number to print it's next prime number : ");
    scanf("%d",&a);
    for(i=a+1;i!=0;i++)
    {
        for(j=a;j>=2;j--)
        {
            if(i%j==0)
            {
                break;
            }

        }
        if(j==1)
        {
            printf("next prime number %d",i);
            break;
        }
    }
    return 0;
}