#include<stdio.h>

void input(int rows,int cols,int a[rows][cols]);
void output(int rows,int cols,int a[rows][cols]);
void addition(int rows,int cols,int a[rows][cols]);
int main()
{
   int a1[19][19],r,c;
   printf("enter the rows:");
   scanf("%d",&r);
   
   printf("enter the cols:");
   scanf("%d",&c);
   
   input(r,c,a1);
   output(r,c,a1);
}
 void input(int rows,int cols,int a[rows][cols])
    { int i,j;
      for (i=0;i<=rows;i++)
      {
         for(j=0;j<=cols;j++){
            printf("Enter the element");
           scanf("%d",&a[i][j]);
         }
         
    }
 }
void output(int rows,int cols,int a[rows][cols])
    { int i,j;
      for (i=0;i<rows-1;i++)
      {
         for(j=0;j<cols;j++)
         {
             printf("%d\t",a[i][j]);
             
         }
         printf("\n");
      }
    }
