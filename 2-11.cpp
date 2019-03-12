#include <stdio.h>
#include <stdlib.h>
int count=0;
void qiujie (int n)
    {    
	    int i;    
		if(n == 1)       
		count++;    
		for(i=2;i<=n;i++)  
		   {        
		      if(n % i == 0)           
			  qiujie(n/i);   
			}
	}
	int main()
	{    
	   int n;    
	   while(scanf("%d",&n)!=EOF){               
		   qiujie(n);        
		   printf("%d\n",count);    
		   }     
		   return 0;
	}

