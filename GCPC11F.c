    #include <stdio.h>
    #include<string.h> //added
    int i,t,ch[100];
    char s[1000+10],cha;
    int main(void)
    {
    scanf("%d ",&t);
    for(i=1;i<=t;i++)
    {
    gets(s);
    int k,p,flag=0,max=0,j,x,d;
    int ch[100]={0};
    for(j=0;s[j]!='\0';j++)
    {if(s[j]!=' ')
    ch[((int)(s[j]))]++;
    }
    for(j=65;j<=90;j++)
    {
    if(ch[j]>max)
    {
    max=ch[j];
    p=j;
    }
    }
    for(k=65;k<=90;k++)
    {
    if((k!=p)&&(ch[k]==max))
    flag=1;
    }
    if(flag==0)
    {
    // cha=(char)p;
    d=p-69;
    if(d<0)	//aaded
    d=d+26;	//added
    for(k=0;s[k]!='\0';k++)
    {
    if(s[k]!=' ')
    {x=((int)s[k]-d);
    if(x<65)
    x=x+26;
    s[k]=(char)(x);
    }}
    printf("%d %s\n",d,s);
    }
    else
    printf("NOT POSSIBLE\n");
     
    }
    // your code goes here
    return 0;
    }
     