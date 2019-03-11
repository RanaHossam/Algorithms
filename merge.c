#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void mergeSort(int ar[],int l,int r);
void merge(int ar[],int m,int l,int r);
int main()
{
 int ar[]= {4,3,2,10,12,1,5,6};
 int i,n=8;
 //clrscr();
 mergeSort(ar,0,n-1);
 for(i=0;i<n;i++)
 {
     printf("%d\n ",ar[i]);
 }

 //getch();
 return 0;
}
void mergeSort(int ar[],int l,int r)
{
   int m;
   m=(l+r)/2;
   if(l<r)
   {
       mergeSort(ar,l,m);
       mergeSort(ar,m+1,r);
       merge(ar,m,l,r);

   }

}
void merge(int ar[],int m,int l,int r)
{
    int i,j,k;
    int n1,n2;
    int *L,*R;
    n1=m-l+1;
    n2=r-m;
    L=(int *) malloc(n1*sizeof(ar[0]));
    R=(int *) malloc(n2*sizeof(ar[0]));
    if(L && R)
    {
        //filling the 2 temp arrays
        for(i=0;i<n1;i++)
        {
            L[i]=ar[l+i];
            j++;
        }

         for(i=0;i<n2;i++)
            {
                R[j]=ar[m+1+j];
                j++;
            }

    }
    i=j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            ar[k]=L[i];
            i++;
        }
        else
        {
            ar[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        ar[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        ar[k]=R[j];
        j++;
        k++;
    }
}
