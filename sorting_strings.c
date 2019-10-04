#include<stdio.h>
#include<string.h>

int main(){
	int i,j,n;                                                          // n = number of strings , i,j = variables for loops and arrays
	char a[25][25],b[25];
  	printf("enter the number of strings\n");
  	scanf("%d",&n);

  	printf("enter strings\n");
  	for(i=0;i<=n;i++)                                                   // taking input
	{    
	  gets(a[i]);
	}
  	for(i=0;i<=n;i++)                                                   // buuble sorting for string arrays start
	{
 	    for(j=i+1;j<=n;j++)
		{
			if(strcmp(a[i],a[j])>0)                             // if condition for sorting
			{
				strcpy(b,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],b);
	        	}
		}
	}
	printf("Order of Sorted Strings is\n");
	for(i=0;i<=n;i++)                                                  // loop for printing strings in sorted manner
	{
		puts(a[i]);
	}
	  
}