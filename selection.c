#include <stdio.h>
#include <conio.h>
void selection(int ar[],int n);
void swap(int *x,int * y);
int main()
{
 int ar[]= {4,3,2,10,12,1,5,6};
 int n=8;
 //clrscr();
 selection(ar,n);
// getch();
 return 0;
}
void selection(int ar[],int n)
{
    int i=0,j,min;
    while(i<n)
    {
       min=ar[i];
       for(j=i+1;j<n;j++)
       {
           if(ar[i]>ar[j])
           {
               swap(&ar[i],&ar[j]);
           }
       }
       i++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}
void swap(int *x,int * y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
