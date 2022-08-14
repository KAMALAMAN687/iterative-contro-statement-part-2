#include<stdio.h>
int main()
{
    int a,c;
    printf("all prime numbers under 100 are : \n");
    for(a=2;a<=100;a++)
    {
        if(a==2)
        printf("%d\n",a);
        else
        {
            for(c=2;c<=a-1;c++)

            {
                if(a%c==0)
                {
                    break;
                }
                    
            }
            if(c==a)
            printf("%d\n",a);

        }
    }
    return 0;
}