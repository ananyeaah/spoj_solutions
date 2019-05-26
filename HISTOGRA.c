#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int left,maxar,ar,top,i,n,t,a[1000000];
int main() {
	scanf("%lld",&n);
	while(n!=0)
	{
		top=-1;
    	maxar=ar=-2;
    	long long int h[100010]={0};
    	long long int in[100010]={0};
    
		 for(i=0;i<n;i++)
    	    {
        	scanf("%lld",&a[i]);
    		}
    for(i=0;i<=n;i++)
        {
        while(top>=0&&(i==n||h[top]>a[i]))
            {
            if(top>0)
                left=in[top-1];
            else
                left=-1;
            ar=(i-left-1)*h[top];
            --top;
            if(ar>maxar)
                maxar=ar;
    	    }
        if(i<n)
            {
            ++top;
            h[top]=a[i];
            in[top]=i;
        	}
    }
    printf("%lld\n",maxar);	
		scanf("%lld",&n);
	}
	return 0;
}