#include<stdio.h>
int main()
{
  long long int t;
    scanf("%lld",&t);
    while(t--)
    {
       long long int n;
       long long int i,k=0,j,c=0,a[1000000]={1};
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=k;j++)
             {
                a[j]=a[j]*i+c;
                c=a[j]/10;
                a[j]=a[j]%10;
             }
             while(c)
             {
                 k++;
                 a[k]=c%10;
                 c/=10;
             }
         }
        
            printf("%lld\n",k+1);
    }
    return 0;
}
