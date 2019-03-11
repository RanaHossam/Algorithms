#include <conio.h>
#include <stdio.h>
int binarySearch(int ar[],int target,int start, int end);
int main()
{
 int index, target, i,ar[]={1,2,3,8,10,20};
 int n= sizeof(ar)/sizeof(ar[0]);

// clrscr();
 printf("Array is: \n");
 for(i=0;i<6;i++)
 {
  printf("%d ",ar[i]);
 }
 printf("Enter your target: \n");
 scanf("%d",&target);
 //target=10;
 index= binarySearch(ar,target,0,n-1) ;
 if(index==-1)
 {

     printf("ELement is not present in the array");
 }
 else
    {
    printf("\nIndex of %d: is %d",target,index);
    }
 //getch();


 return 0;
}
int binarySearch(int ar[],int target,int start, int end)
{
 int m=start+(start-end)/2;
 if(start <= end)
 {
   if(ar[m]==target)
   {
      return m;
   }
   else if(ar[m] < target)
   {
      return binarySearch(ar,target,m+1,end);
   }
  else  return binarySearch(ar,target,start,m-1);
 }
 return -1;
}
