#include<stdio.h>
int main()
{
int i,n,pr[10]={1,2,3,4,5,6,7,8,9,10},min,k=1,btime=0;
int bur[10],temp,j,arr[10],wait[10],tat[10],ta=0,sum=0;
float wavg=0,tavg=0,tsum=0,wsum=0;
printf(" -------Shortest Job First Scheduling ( NP )-------\n");
printf("\nEnter the No. of processes :");
scanf("%d",&n);
 
for(i=0;i<n;i++)
{
printf("\tEnter the burst time of %d process :",i+1);
scanf(" %d",bur[i]);

}
for(i=0;i<n;i++)
{
printf("\tEnter the arrival time of %d process :",i+1);
scanf(" %d",arr[i]);
}
 
/*Sorting According to Arrival Time*/
 
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(at[i]<at[j])
{
temp=pr[j];
pr[j]=pr[i];
pr[i]=temp;
temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
temp=bur[j];
bur[j]=bur[i];
bur[i]=temp;
}
}
}
 

 
for(j=0;j<n;j++)
{
btime=btime+bt[j];
min=bur[k];
for(i=k;i<n;i++)
{
if (btime>=arr[i] || bur[i]<min)
{
temp=pr[k];
pr[k]=pr[i];
pr[i]=temp;
temp=arr[k];
arr[k]=arr[i];
arr[i]=temp;
temp=bur[k];
bur[k]=bur[i];
bur[i]=temp;
}
}

}

 

 
printf("************************");
printf("\n RESULT:-");
printf("\nProcess\t Burst\t Arrival\t Waiting\t Turn-around" );
for(i=0;i<n;i++)
{
printf("p%d %d %d %d%d",pr[i],bur[i],arr[i],wait[i],tat[i]);
}
 

return 0;
}
