#include<stdio.h>
int main()
{
     struct task_table{
         int prio;
         char task_name[30];
         char Aouther_name[30];
         char dd_o_t[10];
     };
     struct task_table t[100];
     int i,j,n,k;
     char d_o_t[10][30];
     
     printf("\n task of how many days we have to manage:");
     scanf("%d", &n);
     //  for input
     
     for(i=0; i<n; i++)
     {
         printf("\n Enter date of task :");
         scanf("%s",&d_o_t[i]);
         printf("\n Enter no of task we have to perform at %s",d_o_t[i]);
         scanf("%d", &j);
         for(k=0; k<j; k++)
         {
             printf("\n Enter priority, task name, aouther name and due date:");
             scanf("%d %s %s %s", &t[k].prio, &t[k].task_name,&t[k].Aouther_name, &t[k].dd_o_t );
         }
     }
     //  for output
     
     for(i=0; i<n; i++)
     {
         printf("\n task for date %s:",d_o_t[i]);
         printf("\n priority  task name  Aoutther name  due date");
         for(k=0; k<j; k++)
         {
             printf("\n %d         %s         %s      %s", t[k].prio, t[k].task_name,t[k].Aouther_name, t[k].dd_o_t);
         }
     }

     return 0;
}
