#include<stdio.h>
void swap(int,int);
void main()
{
    int a=5,b=9;
    //scanf("%d %d",&a,&b);
    swap(a,b);
    printf("%d%d\n",a,b);
}
void swap(int x,int y)
{
    int temp;
    temp=x;x=y;temp=y;
    printf("%d %d\n",x,y);
}
    
        
    
