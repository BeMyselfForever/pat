#include<cstdio>

int main()
{
    int n,number,temp;
    scanf("%d",&n);
    int result[n+1];
    for(int i=1;i<=n;i++){
        result[i-1]=i;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&number);
        temp=result[i];
        result[i]=result[number-1];
        result[number-1]=temp;
    }
    printf("%d",result[0]);
    for(int i=1;i<n;i++){
        printf(" %d",result[i]);
    }
    return 0;
}
