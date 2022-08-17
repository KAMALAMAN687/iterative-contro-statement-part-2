#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("enter two numbers which have to find prime number between them : ");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b-1;i++)
    {
        for(j=i-1;j>=2;j--)
        {
            if(i%j==0)
            break;
        }
        if(j==1)
        printf("%d\n",i);
    }
    return 0;
}