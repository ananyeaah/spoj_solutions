#include <stdio.h>
 
int main(void) {
 
 
 
	int T,n,i,j,k,count,c,final=0,num;
scanf("%d",&T);
        for(k=1;k<=T;k++)
        {final=0;
        scanf("%d",&n);
 
                for(num=30;;num++)
                {count=0;
                        for(i=2;i<=num;i++)
                        {
                        c=0;
                                if(num%i==0)
                                {
                                        for(j=2;j<=i/2;j++)
                                        {
                                                if(i%j==0){
                                                c=1;break;}
                                        }
                                        if(c==0)
                                        count++;
                                }
                        }
                        if(count>=3)
                        final++;
 
                        if(final==n)
                        {
 
                        printf("%d\n",num);
                        break;}
 
                }
        }
	// your code goes here
	return 0;
}