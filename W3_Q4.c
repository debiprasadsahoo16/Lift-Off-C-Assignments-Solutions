#include<stdio.h>
int swap(int a,int b);
int main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping: ");
    printf("a= %d b= %d\n",a,b);
    printf("Numbers after swapping: ");
    swap(a,b);
    return 0;
}
int swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("a= %d b= %d",a,b);
}