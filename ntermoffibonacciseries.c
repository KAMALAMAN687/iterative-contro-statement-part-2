#include<stdio.h>
int main()
{
    int a=0,b=1,c=1,d,e;
    printf("enter a number: ");
    scanf("%d",&d);
    if(d==1||d==2)
    {   
        if(d==1)
        printf("0");
        else
        printf("1");

    }
    else
    {
        for(c=1;c<=d-2;c++)
        {
            e=a+b;
            a=b;
            b=e;
        }
        printf("%d",e);
    }
    
}