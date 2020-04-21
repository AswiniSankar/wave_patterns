/*
4
3
   /\      /\      /\      
  /  \    /  \    /  \    
 /    \  /    \  /    \  
/      \/      \/      \

*/




#include<stdio.h>
int main()
{
 int height,lenght,i,j,b,e=2,k,n;
 scanf("%d%d",&height,&lenght);
 b=2*height-2;
 for(i=1;i<=height;i++)
 {for(j=height-1;j>=i;j--)
   printf(" ");
  for(j=1;j<=lenght;j++)
  {for(k=1;k<=e;k++)
  {
    if(k==1)
    printf("/");
    else if(k==e)
      printf("\\");
    else
     printf(" ");
   }
   n=1;
    while(n<=b)
    {printf(" ");
     n++;
    }   
  }
  b=b-2;
  e=e+2;
 printf("\n");
 }
 printf("\n");
 return 0;
}
