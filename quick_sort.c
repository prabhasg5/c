#include<stdio.h>
void swap(int A[],int x, int y);
void quick_sort(int A[],int l,int r)
{
    if(r-l<=0)
    return;
    else
    {
        int i=l+1;
        for(int j=l+1;j<=r;j++)
        {
            if(A[j]<A[l])
            {
            swap(A,i,j);
            i++;
            }
        }
        swap(A,i-1,l);
        quick_sort(A,l,i-2);
        quick_sort(A,i,r);
    }
}
void swap(int A[],int x,int y)
{
    int temp;
    temp=A[x];
    A[x]=A[y];
    A[y]=temp;
}
int main()
{
    int A[50],k;
    int n;
    printf("entert he size of the array\n");
    scanf("%d",&n);
    printf("enter the values in array with space between each element\n");
    for(k=0;k<n;k++)
    {
        scanf("%d",&A[k]);
    }
    int l=0;
    int r=n-1;
    quick_sort(A,l,r);
    printf("the sorted array is\n");
    for(k=0;k<n;k++)
    {
        printf("\t%d\t",A[k]);
    }
    return 0;
}