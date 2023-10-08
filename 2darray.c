#include<stdio.h>
int main()

{
    int a[5][6],i,j;
    printf("Enter the element :=");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
        
    }

    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
           printf("%d\t",a[i][j]);
        }
        
    }
    return 0;
}