#include<stdio.h>
int main()
{
    int num[3],i,chk=0;
    for(i=0;i<3;i++)
      scanf("%d",&num[i]);
    for(i=0;i<3;i++){
        if(num[i]>chk)
          chk=num[i];
    }
    printf("%d",chk);
      return 0;
}
