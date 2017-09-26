#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    int a[n],i,j,temp;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
      for(j=i+1;j<n;j++)
           if(a[i]<a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
    temp=0;   
    for(i=0;i<n;i++)
     temp=temp*10+a[i];
    printf("%d",temp);
    return 0;
}
