#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int i,k=0,j,c=0,a[1000]={1};
        scanf("%d",&n);
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
         for(i=k;i>=0;i--)
            printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}