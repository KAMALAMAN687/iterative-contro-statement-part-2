#include<stdio.h>
int main()
{
    int a=-1,b=1,c=1,d,e;
    printf("enter a number: ");
    scanf("%d",&d);

    
        while(d>=0)
        {
            e=a+b;
            a=b;
            b=e;
            if(e==d)
            {
                printf("in the fibonacci series");
                break;
            }
            if(e>d)
            {
                printf("not in fibnocci series");
                break;
            }    
        }
        return 0;
        
       
    
    
}