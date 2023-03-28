#include<bits/stdc++.h>
using namespace std;
 int main()
{

    int i, P, sum=0,count=0, y, quant, wt=0, tat=0, at[10], bt[10], temp[10];
    float avg_wt, avg_tat;
     cout<<" Total number of process in the system: ";

      cin>>P;
      y = P;


  for(i=0; i<P; i++){


   cout<<" Arrival time is: \t";
   cin>>at[i];
    cout<<" \nBurst time is: \t";
   cin>>bt[i];
   temp[i] = bt[i];
}

  cout<<"Enter the Time Quantum for the process: \t";
   cin>>quant;

     cout<<"Process No"<<"\t"<<"Burst Time "<<"\t"<<" TAT "<<"\t"<<"Waiting Time"<<endl;

  for(sum=0, i = 0; y!=0; ){

if(temp[i] <= quant && temp[i] > 0)
{
    sum = sum + temp[i];
    temp[i] = 0;
    count=1;
    }
    else if(temp[i] > 0)
    {
        temp[i] = temp[i] - quant;
        sum = sum + quant;
    }
    if(temp[i]==0 && count==1)
    {
        y--;
        cout<<"p"<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<sum-at[i]<<"\t\t"<<sum-at[i]-bt[i];
        wt = wt+sum-at[i]-bt[i];
        tat = tat+sum-at[i];
        count =0;
    }
    if(i==P-1)
    {
        i=0;
    }
    else if(at[i+1]<=sum)
    {
        i++;
    }
    else
    {
        i=0;
    }
}

 avg_wt = wt * 1.0/P;
 avg_tat = tat * 1.0/P;
 cout<<"\n Average Turn Around Time: "<< avg_wt;
 cout<<"\n Average Waiting Time: "<< avg_tat;
 return 0;
}

