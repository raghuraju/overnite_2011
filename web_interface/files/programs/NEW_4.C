# include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define swap(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
int k;

void perm(int *list,int i,int n);

void main ()
{
int *list,i,j,n,m;


scanf("%d",&n);

list=(int *)malloc(sizeof(int)*n);

for(i=0;i<n;i++)
{
	scanf("%d",&list[i]);
 }
if(n==1)
    printf("%d\n",list[0]);

else

{
k=list[0]+list[1];

perm(list,0,n-1);

printf("%d\n",k);
}


}

void perm(int list[],int i,int n)
{
	int j,temp,max;
if(i==n)
{
	
	max=list[0]+list[1];
		
	for(j=2;j<n;j+=2)
	{
	 max=(list[j]+list[j+1])>max?list[j]+list[j+1]:max;

	}
	if(n%2==0)
	max=max>list[n]?max:list[n];

	
	k=k>max?max:k;
	
	
}

	else
	{
		for(j=i;j<=n;j++)
		{
		swap(list[i],list[j],temp);
		perm(list,i+1,n);
		swap(list[i],list[j],temp);
		}
	}	
}

