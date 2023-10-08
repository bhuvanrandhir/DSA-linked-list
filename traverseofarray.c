/* Documentation
author :-  Mr. Randhir Kumar 
sub Array 

*/

// traversal 
#include<stdio.h>

int main()
{
  int a[50],size,i;
  printf("Enter the size of array: ");
  scanf("%d",&size);
  printf("Enter the element of array: ");

for(i=0;i<size;i++)  //input 
{
    scanf("%d",&a[i]);

}
printf("Element in array are:");
for(i=0;i<size;i++)  //print
{
    printf("%d\n", a[i]);

}




}

