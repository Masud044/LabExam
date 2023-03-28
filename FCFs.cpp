#include<bits/stdc++.h>
using namespace std;

int main(){

	int bt[10]={0},at[10]={0},tat[10]={0},wt[10]={0},ct[10]={0};
	int n,sum=0;
	float totalTAT=0,totalWT=0;

	cout<<"Enter number of processes: ";
	cin>>n;

	for(int i=0;i<n;i++)
	{

		cout<<"Arrival time of process : ";
		 cin>>at[i];

		cout<<"Burst time of process : ";
		cin>>bt[i];
		cout<<"\n";
	}


	for(int j=0;j<n;j++)
	{
		sum+=bt[j];
		ct[j]+=sum;
	}



	for(int k=0;k<n;k++)
	{
		tat[k]=ct[k]-at[k];
		totalTAT+=tat[k];
	}


	for(int k=0;k<n;k++)
	{
		wt[k]=tat[k]-bt[k];
		totalWT+=wt[k];
	}

	cout<<"Solution: \n\n";
	cout<<"P"<<"\t"<<"AT"<<"\t"<<"BT"<<"\t"<<"CT"<<"\t"<<"TAT"<<"\t"<<"WT"<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<"p"<<i+1<<"\t"<<at[i]<<"\t"<<bt[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<endl;
	}

	cout<<"\n\nAverage Turnaround Time : "<<totalTAT/n;
	cout<<"\nAverage WT : "<<totalWT/n;

	return 0;
}


