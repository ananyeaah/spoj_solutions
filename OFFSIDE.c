#include<stdio.h>
int main(){
    int m,n,i,j,temp;
     int ar[100000],br[100000];
    while(1){
        scanf("%d %d",&m,&n);
        if(m==0 && n==0)
           break;
       
        for(i=0;i<m;i++)
            scanf("%d",&ar[i]);
        for(i=0;i<n;i++)
            scanf("%d",&br[i]);
        //sort(ar,ar+m);
        //sort(br,br+n);
        for(i=0;i<m;i++)
        {
        	for(j=i+1;j<m;j++)
        	{
        		if(ar[i]>ar[j])
        		{
        			temp=ar[i];
        			ar[i]=ar[j];
        			ar[j]=temp;
        		}
        	}
        }
        for(i=0;i<n;i++)
        {
        	for(j=i+1;j<n;j++)
        	{
        		if(br[i]>br[j])
        		{
        			temp=br[i];
        			br[i]=br[j];
        			br[j]=temp;
        		}
        	}
        }
        if(ar[0]<br[1]){
            printf("Y\n");
        }else{
            printf("N\n");
    }
    }
    return 0;
}
