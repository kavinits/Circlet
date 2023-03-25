#include<stdio.h>
main()
{
  int i,j,n;
  
  for(i=1;i<=5;i++)
  {
    printf("\n");
    
    for(j=1;j<=5-i;j++)
    {
       printf("  ");
    }
    for(j=5;j>5-i;j--)
    {
       printf(" %d",j);
    }
    for(j=5-i+2;j<5+1;j++)
    {
       printf(" %d",j);
    }
  }
  for(i=1;i<=5;i++)
  {
    printf("\n");

    for(j=1;j<=i;j++)
    {
       printf("  ");
    }
   
  }
  
}

