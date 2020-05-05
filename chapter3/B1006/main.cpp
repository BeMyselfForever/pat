#include <cstdio>
char tag[2]={'S','B'};
int main()
{
    char ans[5];
    int n,num=0;
    scanf("%d",&n);
    do{
        ans[num++]=n%10;
        n/=10;
    }while(n!=0);
    for(int i=num-1;i>0;i--){
        for(int j=0;j<ans[i];j++){
            printf("%c",tag[i-1]);
        }
    }
    for(int i=0;i<ans[0];i++){
        printf("%d",i+1);
    }
    return 0;
}
