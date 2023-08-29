#include<stdio.h>
int main(){
 int bt[20],wt[20],tat[20],i,k,n,p[20],temp=0;
 float wtavg,tatavg;
 printf("Enter the no of processes:");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 p[i]=i+1;
  printf("Enter burst time for process %d :",i+1);
  scanf("%d",&bt[i]);
  }
  for(i=0;i<n;i++){
    for(k=i+1;k<n;k++){
      if(bt[i]>bt[k]){
        temp=bt[i];
        bt[i]=bt[k];
        bt[k]=temp;
        temp=p[i];
        p[i]=p[k];
        p[k]=temp;
        }
      }
    }
    wt[0]=wtavg=0;
    tat[0]=tatavg=bt[0];
    for(i=1;i<n;i++){
      wt[i]=wt[i-1]+bt[i-1];
      tat[i]=tat[i-1]+bt[i];
      wtavg+=wt[i];
      tatavg+=tat[i];
     }
     printf("\tPROCESS\tBURST TIME\tWAITING TIME\t TURN AROUND TIME\n");
 for(i=0;i<n;i++){
   printf("\n\tP%d\t\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);
  }
 printf("\nAverage waiting time %f is :",wtavg/n);
 printf("\nAverage turnaround time %f is :",tatavg/n);
 }
        
