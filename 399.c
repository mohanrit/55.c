#include<stdio.h>
void main()
{
    
    char a[7]={5,4,7,10,2,0,3,8}; int max,i; max=a[0];
    //scanf("%d",a);
    for(i=0;i<=7;i++)
    {
        
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    
    printf("%d",max);
}
