#include<stdio.h>
int eo(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    eo(num);
    return 0;
}
int eo(int num)
{
    if(num%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
}