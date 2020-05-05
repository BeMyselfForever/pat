#include <cstdio>


int main()
{
    int n,ans[30],b,num=0;
    scanf("%d %d",&n,&b);
    do{
        ans[num++]=n%b;
        n/=b;
    }while(n!=0);
    for(int i=0;i<num;i++){
        if(ans[i]!=ans[num-1-i]){
            n=1;
            break;
        }
    }
    //printf("%d",n);
    if(n==1)printf("No\n");
    else if(n==0)printf("Yes\n");
    printf("%d",ans[num-1]);
    for(int i=num-2;i>=0;i--){
        printf(" %d",ans[i]);
    }
    return 0;
}
