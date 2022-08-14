#include<stdio.h>
int main()
{
    int H,a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0&&b%H==0)
        printf("hcf is %d ",H);
        break;
    }
}