
#include<stdio.h>

int main()
{
  int a[50],size,i,pos,item;
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
    printf("%d ", a[i]);

}
printf("\nEnter pos of data you want to delete:=");

scanf("%d",&pos);
//condition
if(pos<=0 || pos>size)
{
    printf("invalid position\n");
}
else
{
    //item for store delete data
   // item=a[pos-1];
   
for(i=pos-1;i<size-1;i++)  // according to index st with 0
{
  a[i]=a[i+1];
}
   // insrtion data in pos
size--; 
}  // size incrasing
for(i=0; i<size; i++)
{
  printf("%d ", a[i]);
  
  }
 return 0;




}

