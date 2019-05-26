  #include <stdio.h>
    int t,n,flag,i;
    char ch,a[1000];
    int main(void)
    {
    scanf("%d",&t);
    while(t--)
    {
    char a[102];
 
    for(i=1;i<100;i++)
    {
    scanf("%d",&n);
    scanf("%*c%c",&a[i]);
 
    }
    if(a[9]==a[18]&&a[18]==a[27]&&a[27]==a[36]&&a[36]==a[45]&&a[45]==a[54]&&a[54]==a[63]&&a[63]==a[72]&&a[72]==a[81])
    printf("YES\n");
    else
    printf("NO\n");
    }
    // your code goes here
    return 0;
    }