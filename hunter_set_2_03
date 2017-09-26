#include <stdio.h>
void finduniq(int n);
int main()
{
    int k;
    printf("Enter the value of n \n");
    scanf("%d",&k);
    finduniq(k);
    return 0;
}
void finduniq(int n)
{
int a[n],i,j,temp;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        temp=0;
      for(j=i+1;j<n;j++)
           if(a[i]==a[j]){
               temp=1;
               break;
           }
    if(temp==0){ printf("%d",a[i]);
    break;}
    }
}
