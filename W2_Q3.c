#include <stdio.h>
#include <math.h>
int main()
{
  	int N,fd,dc,ld,a,b,sn;
  	printf("\n Please Enter any Number that you wish  : ");
  	scanf("%d",&N);
  	dc=log10(N); 	
  	fd=N/pow(10,dc); 	
  	ld=N%10; 	
  	a=fd*(pow(10,dc));
  	b=N%a;
  	N=b/10; 	
  	sn=ld*(pow(10,dc))+(N*10+fd);    
	printf(" \n The Number after Swapping First Digit and Last Digit =  %d",sn);
  	return 0;
}