#include <stdio.h>
#include <conio.h>
int partition(int a[], int start, int end);
void quickSort(int a[], int start, int end);
void swap(int *x, int *y);
int main()
{
 int i;
 int ar[]={7,2,1,6,8,5,3,9};
 //clrscr();
 printf("Unsorted array:\n");
 for(i=0;i<8;i++)
 {
  printf("%d ",ar[i]);
 }

 quickSort(ar,0,7);
 printf("\nSorted array:\n");

 for(i=0;i<8;i++)
 {
  printf("%d ",ar[i]);
 }
 //getch();

 return 0;
}

void quickSort(int a[], int start, int end)
{
 int p;

 if(start < end)
 {
  p = partition(a,start,end);
  quickSort(a,start,p-1);
  quickSort(a, p+1, end);
 }
}
int partition(int a[], int start, int end)
{
 int i,p=start;  //partition index
 int pivot=a[end];
 for(i=start;i<end;i++)
 {
   if(a[i]<=pivot)
   {
    swap(&a[i],&a[p]);
    p++;
   }
 }

 swap(&a[p],&a[end]);
 return p;
}
void swap(int *x, int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
