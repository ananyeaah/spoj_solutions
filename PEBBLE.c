#include <stdio.h>
char s[1000000];
int i,c,j=1;
char ch;
int main(void) {
	while(scanf("%s",&s)==1)
	{i=0;c=0;
ch='1';
	while(s[i]!='\0'){
	
		if(s[i]==ch)
		{c++;
		if(ch=='1')
		ch='0';
		else 
		ch='1';}
		
		i++;
	}
	printf("Game #%d: %d\n",j,c);
	j++;
	}
 
	// your code goes here
	return 0;
}


