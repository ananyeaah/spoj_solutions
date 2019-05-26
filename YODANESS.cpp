#include <iostream>
#include <map> 
#include<vector>
using namespace std;
//vector<vector <char> >s1(1000000);
//vector<vector<char> >s(1000000);
map <string,long long > m1,m2;
long long merge(int a[],int l,int mid,int h,int temp[]){
    int i,j,k;
    long long count=0;
    j = mid+1;
    i = l;
    j = mid+1;
    k = l;
    while(i<=mid&&j<=h){
        if(a[i]<=a[j]){
            temp[k] = a[i];
            i++;k++;
        }
        else
        {count+=mid-i+1;
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        temp[k] = a[i];
        i++;k++;
    }
    while(j<=h){
        temp[k] =  a[j];
        j++;k++;
    }
    for(k=l;k<=h;k++)
        a[k] = temp[k];
    return count;
}
long long mergesort(int a[],int l,int h,int temp[]){
    if(l==h)
        return 0;
    int mid;
    mid = (l+h)/2;
    long long lc,rc,mc;
    lc = mergesort(a,l,mid,temp);
    rc = mergesort(a,mid+1,h,temp);
    mc = merge(a,l,mid,h,temp);
    return lc+rc+mc;
}
int main()
{
    int t,n,i,j;
    char s[30010];
    char s1[30010];
    cin >>t;
    while(t>0){
        cin >>n;
        int a[1000000],temp[1000000];
        for(i=0;i<n;i++)
            {
            	cin >> s;
//            	scanf("%d",&s[i]);
            	m1[s]=i;
			}        
			for(i=0;i<n;i++)
            {
            	cin >> s1;
//            	scanf("%d",&s1[i]);
            	a[i]=m1[s1];
			}     
			long long ans = mergesort(a,0,n-1,temp);
       cout <<ans <<endl;
        t--;
    }
}