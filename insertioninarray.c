
#include<stdio.h>

int main()
{
  int a[50],size,i,num,pos,item;
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
printf("Enter data you want to insert:=");
scanf("%d",&num);
printf("Enter the position :=");
scanf("%d",&pos);
//condition
if(pos<=0 || pos>size+1)
{
    printf("invalid position");
}
else
{
   
for(i=size-1;i>=pos-1;i--)  // according to index st with 0
{
  a[i+1]=a[i];
}
a[pos-1]=num;    // insrtion data in pos
size++; 
}  // size incrasing
for(i=0; i<size; i++)
{
  printf("%d", a[i]);
  printf("\n");
  }
 return 0;




}

