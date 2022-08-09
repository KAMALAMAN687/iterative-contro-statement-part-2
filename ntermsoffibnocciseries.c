#include<stdio.h>
int main()
{
    int a=-1,b=1,c=1,d,e;
    printf("enter a number: ");
    scanf("%d",&d);

    
        for(c=1;c<=d;c++)
        {
            e=a+b;
            printf("%d\n",e);
            a=b;
            b=e;
        }
       
    
    
}