#include<cstdio>

int main()
{
    int A,B,D;
    int ans[35],num=0;
    scanf("%d %d %d",&A,&B,&D);
    A=A+B;
   do{
        ans[num++]=A%D;
        A/=D;
    }while(A!=0);
    for(int i=num-1;i>=0;i--){
        printf("%d",ans[i]);
    }
    return 0;
}
