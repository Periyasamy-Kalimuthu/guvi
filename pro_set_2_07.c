#include <stdio.h>
int main()
{
    int num,j,temp=0,seed;
    scanf("%d",&num);
    for(j=0;j<num/2;j++){
    temp=j;seed=1;
    while(temp!=0){
        seed=(temp%10)*seed;
        temp=temp/10;
    }
    if(num==(seed*j))
     printf("%d",j);
    }
    return 0;
}
