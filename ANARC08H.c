#include <stdio.h>

struct node
{
	struct node *next;
	int data;
};
int n,d,i,n1;
int main(void) {
	scanf("%d%d",&n,&d);
	while(n!=0&&d!=0)
	{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *head;
	head=temp;
	temp->data=1;
	for(i=2;i<=n;i++)
	{
		temp->next=(struct node *)malloc(sizeof(struct node));
		
		temp=temp->next;
		temp->data=i;
	}
	temp->next=head;
	n1=n;
	n--;
	while(n--)
	{	for(i=1;i<d;i++)
		{
				temp=temp->next;				
		}
		//temp->data=temp->next->data;
		temp->next=temp->next->next;
	}
	printf("%d %d %d\n",n1,d,temp->data);
scanf("%d%d",&n,&d);
}// your code goes here
	return 0;
}
