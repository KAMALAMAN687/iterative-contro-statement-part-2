#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    for(c=a<b?a:b;c<=a<b?a:b;c--)
    {
        if(a%c==0&&b%c==0)
        {
            printf("hcf is %d\n",c);
            break;
        }
    }
    if(c==1)
    {
        printf("%d and %d are co prime numbers ",a,b);

    }
    else
    {
        printf("%d and %d are not co prime numbers",a,b);
    }
    return 0;
}