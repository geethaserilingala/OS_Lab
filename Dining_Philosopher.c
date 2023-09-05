#include<stdio.h>
#include<stdlib.h>
 int tph,philname[20],hu[20],howhung,status[20],choice;
 int one(),two();
 int main(){
   int i; 
   printf("DINING PHILOSOPHERS PROBLEM\n");
   printf("Enter total no of philosophers: ");
   scanf("%d",&tph);
   for(i=0;i<tph;i++){
     philname[i]=(i+1);
     status[i]=1;
    }
   printf("How many philosophers are hungry: ");
   scanf("%d",&howhung);
   if(tph==howhung){
     printf("\nAll the Philosophers are hungry..\nDead Lock will occur..\n");
     printf("EXITING....");
     }
     else{
      for(i=0;i<howhung;i++){
         printf("\nEnter the Philosopher %d position: ",(i+1));
         scanf("%d",&hu[i]);
         status[hu[i]]=2;
         }
      
do{
  printf("\n1.One can eat at a time\n2.Two can eat at a time\n3.Exit\n");
  printf("Enter your choice:  \n");
  scanf("%d",&choice);
  switch(choice){
    case 1: one();
            break;
    case 2: two();
            break;
    case 3: exit(0);
    default: printf("\nInvalid Option\n");
    }
 }while(1);
 }
 }
 int one(){
 int i,pos=0,x;
  printf("\nAllow only one to eat at any time\n");
  for(i=0;i<howhung;i++,pos++){
     printf("P%d is granted to eat\n",philname[hu[pos]]);
     
     for(x=pos;x<howhung;x++)
     printf("P%d is waiting\n",philname[hu[x]]);
     }
  }
 int two(){
 int i,j,t,x,r,s=0;
   printf("Allow two philosophers to eat at any time\n");
   for(i=0;i<howhung;i++){
       for(j=i+1;j<howhung;j++){
          if(abs(hu[i]-hu[j])>=1 && abs(hu[i]-hu[j])!=4){
             printf("Combination %d ",(s+1));
            t=hu[i];
            r=hu[j];
            s++;
            printf("P%d and P%d are granted to eat",philname[hu[i]],philname[hu[j]]);
           for(x=0;x<howhung;x++){
             if(hu[x]!=t && hu[x]!=r){
               printf("P%d is waiting",hu[x]);
              }
           }
       }
    }
  }
}
            
   
  
 
 
     
