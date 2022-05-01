#include<stdio.h>
int array(int n);
int main()
{
    int n,c;
    printf("Entr the size of the array: ");
    scanf("%d",&n);
    c=array(n);
    printf("Largest element: %d",c);
    return 0;
}
int array(int n)
{
    int a[100],i,elm,j,temp;
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a[n-1];
}