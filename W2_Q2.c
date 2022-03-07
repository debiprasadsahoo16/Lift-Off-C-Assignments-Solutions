#include <stdio.h>

int main() 
{
    int i,num,sumo=0,sume=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num%2==0)
        {
            sume=sume+num;
        }
        else
        {
            sumo+=num;
        }
    }
    printf("Sum of odd numbers: ");
    printf("%d\n",sumo);
    printf("Sum of even numbers: ");
    printf("%d",sume);
    return 0;
}