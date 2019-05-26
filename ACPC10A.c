#include <stdio.h>
#include<math.h>

int main() {
    int x,y,z;
    while(1)
    {
       scanf("%d%d%d",&x,&y,&z);
        if(x==0 && y==0 && z==0)
        break;
        else if((x+z)==2*y)
        {
            int next=x+3*(y-x);
            printf("AP %d\n",next);
        }
        else
        {
            int next=x*pow(y/x,3);
            printf("GP %d\n",next);
        }
    }
    return 0;
}