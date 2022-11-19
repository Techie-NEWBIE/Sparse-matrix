#include<stdio.h>
void sparse(int a[][10],int,int);
void transpose(int b[][3],int,int);
int i,j,a[10][10],b[3][3];

void main()
{
 int row,col;
 printf("Enter the row :");
 scanf("%d",&row);
 printf("Enter the coloumn :");
 scanf("%d",&col);
  printf("Enter the elements :");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   scanf("%d",&a[i][j]);
   }
   }
   printf("Entered matrix \n");
   for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   printf("%d\t",a[i][j]);
   }
   printf("\n");
   }
   sparse(a,row,col);
   transpose(b,row,col);
}

void sparse(int a[][10],int row,int col)
{
int k=1;
b[0][0]=row;
b[0][1]=col;
for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
  if(a[i][j]!=0)
  {
   b[k][0]=i;
   b[k][1]=j;
   b[k][2]=a[i][j];
   k++;
   }
   b[0][2]=k-1;
   }
   }printf("sparse matrix\n");
  for(i=0;i<k;i++)
{
printf("%d \t %d \t %d \n",b[i][0],b[i][1],b[i][2]);
}
}

   void transpose(int b[][3],int row,int col)
   {
    int k=1;
    b[0][0]=col;
    b[0][1]=row;
    for(j=0;j<col;j++)
  {
  for(i=0;i<row;i++)
 {
 if(a[i][j]!=0)
  {
   b[k][0]=j;
   b[k][1]=i;
   b[k][2]=a[i][j];
   k++;
   }
   }
   } printf("Transpose matrix \n");
   for(i=0;i<k;i++)
{
printf("%d \t %d \t %d \n",b[i][0],b[i][1],b[i][2]);
}
}