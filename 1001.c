#include<stdio.h>
int main()
{
    int i,t,v,a,b;
    scanf("%d" , &t);
    for (i=1; i<=t; i++)
    {
        scanf("%d" , &v);
        if (v>=10)
        {
            printf("%d %d\n" , 10, (v-10) );
        }
        else 
        {
            printf("%d 0\n" , v);
        }
        
    }
}