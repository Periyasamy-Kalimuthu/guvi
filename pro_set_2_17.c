#include <stdio.h>
int main()
{
    int num,i,j,a[10],n=0,temp=0,seed;
    scanf("%d",&num);
    scanf("%d",&seed);
    temp=num;
    while(num!=0){
        a[n++]=num%10;
        num=num/10;
    }
    num=1;
    for(i=0;i<n;i++)
     num=num*a[i];
    num=temp*num;
    if(num==seed)
    printf("SEED");
    else
    printf("NOT A SEED");
    return 0;
}

