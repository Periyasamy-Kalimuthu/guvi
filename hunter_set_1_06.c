#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    int a[n],i,j,temp=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++)
           if(a[i]==a[j] && a[i] != -1){
               printf("%d",a[j]);
               temp=1;
               break;
           }
    if(temp==1)
    break;
    }
    return 0;
}
