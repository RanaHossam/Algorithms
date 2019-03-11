#include <stdio.h>
#include <conio.h>
void insertion(int ar[],int n);
int main()
{
 int ar[]= {4,3,2,10,12,1,5,6};
  //int ar[]=  {12, 11, 13, 5, 6};
 int n=8;
 //clrscr();
 insertion(ar,n);
 //getch();
 return 0;
}
void insertion(int ar[],int n)
{
    int i=1,j,key;
    for(i;i<n;i++)
    {
        j=i-1;
        key=ar[i];
        while(j>=0 && key<ar[j])
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=key;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }

}
