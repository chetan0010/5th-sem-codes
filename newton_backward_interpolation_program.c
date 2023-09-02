#include <stdio.h>
#include<math.h>
int main()
{
   float a[50][50],x,u1,u,y;
   int i,j,fact=1,n;
   printf("enter no of terms ");
   scanf("%d",&n);
   printf(" enter years");
   for(i=0;i<n;i++)
   {
      scanf("%f",&a[i][0]);   
   }
   printf("enter population");
   for(i=0;i<n;i++)
   scanf("%f",&a[i][1]);
   printf("enter the value u want to predict");
   scanf("%f",&x);
   for(j=2;j<n+1;j++)
   {
      for(i=0;i<n-j+1;i++)
      {
            a[i][j]=a[i+1][j-1]-a[i][j-1];
      }
   }
   printf("difference table");
   for(i=0;i<n;i++)
   {
         for(j=0;j<=n-i;j++)
         {
               printf("%f",a[i][j]);
               printf("\n");
         }
   }
   u=(x-a[n-1][0])/(a[1][0]-a[0][0]);
   printf("the value of u is %f",u);
   y=a[n-1][1];
   u1=u;
   for(i=2;i<n+1;i++)
   {
         y=y+(u1*a[n-i][i])/fact;
         fact=fact*i;
         u1=u1*(u+(i-1));
   }
   printf("the reqvalue is %f",y);

    return 0;
}
