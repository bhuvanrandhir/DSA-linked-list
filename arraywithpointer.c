#include<stdio.h>
int main()
{
    int a[5],i;
    int*q =a;
    for(i=0;i<5;i++)
    {
        scanf("%d",a+i); //use pointer as &a[i],(a+i)
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",*(q+i)); //*(a+i),i[a],i[q]
    }
}