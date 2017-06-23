#include <stdio.h>
 
 int main(void) {
     int n,a[100],c;
     int i=0,j,k;
     printf("Enter the integer");
     scanf("%d",&n);
     while(a>0)
     {
     	a[i]=n%10;
     	n=n/10;
     	i++;
     
     }
    c=i;
     
     for(i=0;i<c;i++)
     {
     	for(j=i+1;j<c;j++)
     	{
     		if(t[i]>t[j])
     		{
     		    k=a[i];
     	    	    a[i]=a[j];
     		    a[j]=k;
     		}
     	}
     }
   
      for(i=0;i<2;i++)
     {
     	 printf("%d",a[i]);
    }
     
 	return 0;
 }