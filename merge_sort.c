#include<stdio.h>
void merge(int A[],int P,int Q,int r);
void mergeSort(int A[],int P,int r)
{
    if(P<r)
    {
        int Q=(P+r)/2;
        mergeSort(A,P,Q);
        mergeSort(A,Q+1,r);
        merge(A,P,Q,r);
    }
}
void merge(int A[],int P,int Q,int r)
{
    int n1= Q-P+1;
    int n2= r-Q;
    int l[n1+1],R[n2+1];
    for(int i=0;i<n1;i++)
    {
        l[i]=A[P+i];
    }
    for ( int j = 0; j<n2; j++)
    {
        R[j]=A[Q+j+1];
    }
    l[n1]=8888;
    R[n2]=9999;
    int i=0,j=0;
    for(int k=P;k<=r;k++)
    {
        if(l[i]<=R[j])
        {
            A[k]=l[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
}
int main(){
    int A[100],P=0;
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n); 
    int r=n-1; 
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    mergeSort(A,P,r);
    printf("The sorted array is: ");
    for ( int i = 0; i <n; i++)
    {
        printf("\t%d",A[i]);
    }
    printf("\n");
    return 0;
}