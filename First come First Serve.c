#include<stdio.h>
int main(){
 int bt[20],wt[20],tat[20],i,n;
 float wtavg,tatavg;
 printf("Enter the no of processes :");
 scanf("%d",&n);
 for(i=0;i<n;i++){
   printf("Enter the burst time for %d process:",i+1);
   scanf("%d",&bt[i]);
  }
  wt[0]=wtavg=0;
  tat[0]=tatavg=bt[0];
  for(i=1;i<n;i++){
       wt[i]=wt[i-1]+bt[i-1];
       tat[i]=tat[i-1]+bt[i];
       wtavg=wtavg+wt[i];
       tatavg=tatavg+tat[i];
      }
 printf("\tPROCESS\tBURST TIME\tWAITING TIME\t TURN AROUND TIME\n");
 for(i=0;i<n;i++){
   printf("\n\tP%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
  }
 printf("Average waiting time %f is :",wtavg/n);
 printf("Average turnaround time %f is :",tatavg/n);
 
 }
 
