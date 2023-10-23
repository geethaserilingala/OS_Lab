#include<stdio.h>
int main(){
 int in,out,choice,buffer[20],produce,consume,bufsize;
 in=0;
 out=0;
 choice=0;
 bufsize=20;
 while(choice!=3){
   printf("\n1.Produce\n2.consume\n3.Exit");
   printf("\nEnter your choice: ");
   scanf("%d",&choice);
   switch(choice){
    case 1:if((in+1)%bufsize==out){
             printf("Buffer is full");
            }
            else{
             printf("Enter element to produce into buffer: ");
             scanf("%d",&produce);
             buffer[in]=produce;
             in=(in+1) % bufsize;
            } 
            break;
     case 2:if(in==out){
              printf("Buffer is empty");
              }
              else
              {
              consume=buffer[out];
              printf("The consumed value is %d",consume);
              out=(out+1) % bufsize;
             }
             
         }
      }
   }
    
   
