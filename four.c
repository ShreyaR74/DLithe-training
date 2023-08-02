 #include<stdio.h>
#include<stdlib.h>
int main()
{
    int inp,ref=0,i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&inp);
        if(inp>ref){
            count++;
            ref=inp;
        }
    }
    printf("\n%d",count);
}

