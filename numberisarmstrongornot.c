#include<stdio.h>
int main()
{
    int a,b,c=1,d,e,f=1,g=0,h,count=0;
    printf("enter a number");
    scanf("%d",&a);
    h=a;
    while(c!=0)
    {
        c=a/10;
        count++;
    }
    for(b=1;b<=count;b++)
    {
        d=a%10;
        a=a/10;
        for(e=1;e<=count;e++)
        {
            f*=d;
        }
        g+=f;
    }
    if(g==h)
    printf("it is armstrong");
    else
    printf("not a armstrong");

    return 0;

       
    
    
}