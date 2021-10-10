#include<stdio.h>                                                               
                                                                                
#define COLUMN 3                                                                
#define ROW 3                                                                   
                                                                                
void main()                                                                     
{                                                                               
  int matrix1[ROW][COLUMN], matrix2[ROW][COLUMN], matrix3[ROW][COLUMN], matrix4[ROW][COLUMN];
  int i,j;                                                                      
                                                                                
  printf("\nEnter Matrix1: \n");                                                
  for(i=0;i<ROW;i++)                                                            
  {                                                                             
    for(j=0;j<COLUMN;j++)                                                       
    {                                                                           
      scanf("%d", &matrix1[i][j]);                                              
    }                                                                           
  }                                                                             
  printf("\nEnter Matrix2: \n");                                                
  for(i=0;i<ROW;i++)                                                            
  {                                                                             
    for(j=0;j<COLUMN;j++)                                                       
    {                                                                           
      scanf("%d", &matrix2[i][j]);                                              
    }                                                                           
  }                                                                             
  for(i=0;i<ROW;i++)                                                            
  {                                                                             
    for(j=0;j<COLUMN;j++)                                                       
    {                                                                           
      matrix3[i][j] = matrix1[i][j] + matrix2[i][j];                            
    }                                                                           
  }                                                                             
  printf("\nMatrix Addition: \n");                                              
  for(i=0;i<ROW;i++)                                                            
  {                                                                             
    for(j=0;j<COLUMN;j++)                                                       
    {                                                                           
      printf("%d\t", matrix3[i][j]);                                            
    }                                                                           
    printf("\n");                                                               
  }                                                                             
}   
