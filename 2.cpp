#include<stdio.h>
#include<conio.h>
#include<math.h>
int pr[50],arr[50],bur[50],wait[50],comp[50],tat[50];
int i,n,min,a,b,min2;
int min_at();
int main()
{
	int temp,j;

	printf("Enter the total number of processes you want to enter\n");
	scanf("%d",&n);

	printf("-----------------Enter the Arrival time---------------\n");
	for(i=0;i<n;i++)
	{
		printf("Arrival time for process P%d:",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("-----------------Enter the Burst time-----------------\n");
	for(i=0;i<n;i++)
	{
		printf("Burst time for process P%d:",i);
		scanf("%d",&bur[i]);
	}
	printf("\n");
	printf("\n\n----------------So our data is-------------------------\n");
	printf("\nPROCESS\t ARRIVAL TIME\t BURST TIME");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t\t%d\t\t%d",i,arr[i],bur[i]);
		printf("\n");
	}
	for(i=0;i<n-1;i++)   //sorting the burst time and according to shortest burst time process are sorted
	{
		for(j=i+1;j<n;j++)
		{
			if(bur[i]>bur[j])
			{
				temp=bur[i];
				bur[i]=bur[j];
				bur[j]=temp;
				temp=pr[i];
				pr[i]=pr[j];
				pr[j]=temp;
			}
		}
	}
	comp[0]=0;
	for(i=0;i<n;i++)
	{
		comp[i]=comp[i]+bur[i];
		comp[i+1]=bur[i];
	}
	printf("\n---------------------------COMPLETION TIME TIME-------------------------------");
	for(i=0;i<n;i++)
	{
		printf("\nCompletion time for process P%d:%d\n",pr[i],comp[i]);
	}
	printf("\n\n--------------------OUR UPDATED DATA IS--------------------------------");
	printf("\nPROCESS\t ARRIVAL TIME\t BURST TIME\t COMPLETION TIME");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t\t%d\t\t%d\t\t%d",i,arr[i],bur[i],comp[i]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		tat[i]=comp[i]-arr[i];
	}
	printf("\n---------------------------TURN AROUND TIME-------------------------------");
	for(i=0;i<n;i++)
	{
		printf("\nTurn around time for process P%d:%d\n",pr[i],tat[i]);
	}
	printf("\n\n--------------------OUR UPDATED DATA IS--------------------------------");
	printf("\nPROCESS\t ARRIVAL TIME\t BURST TIME\t COMPLETION TIME\t TURN AROUND TIME");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t\t%d\t\t%d\t\t%d\t\t\t%d",i,arr[i],bur[i],comp[i],tat[i]);
		printf("\n");
	}
	wait[0]=0;
	for(i=1;i<n;i++)
	{
		wait[i]=wait[i-1]+bur[i-1];
	}
	
	
	printf("\n---------------------------WAITING TIME-------------------------------");
	for(i=0;i<n;i++)
	{
		pr[i]=i;
		printf("\nWaiting time for process P%d:%d\n",pr[i],wait[i]);
	}
	printf("\n\n\n--------------------OUR FINAL UPDATED DATA IS--------------------------------");
	printf("\nPROCESS\t ARRIVAL TIME\t BURST TIME\t COMPLETION TIME\t TURN AROUND TIME\t WAITING TIME");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t\t\t%d",i,arr[i],bur[i],comp[i],tat[i],wait[i]);
		printf("\n");
	}
	


	
	
}
