#include<cstdio>
//Êı×Ö·ÖÀà
int main()
{
    int num[5] = {0};
    int ans[5] = {0};
    int n,temp;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&temp);
        if(temp%5==0){
        if(temp%2==0){
            ans[0]+=temp;
            num[0]++;
            }
        }
        else if(temp%5==1){
            if(num[1]%2==0){
                ans[1]+=temp;
            }
            else{
                ans[1]-=temp;
            }
            num[1]++;
        }
        else if(temp%5==2){
            num[2]++;
        }
        else if(temp%5==3){
            ans[3]+=temp;
            num[3]++;
        }
        else{
            if(temp >ans[4]){
                ans[4]=temp;
            }
            num[4]++;
        }

    }
        if(num[0]==0)printf("N ");
        else printf("%d ",ans[0]);
        if(num[1]==0)printf("N ");
        else printf("%d ",ans[1]);
        if(num[2]==0)printf("N ");
        else printf("%d ",num[2]);
        if(num[3]==0)printf("N ");
        else printf("%.1f ",(double)ans[3]/num[3]);
        if(num[4]==0)printf("N");
        else printf("%d",ans[4]);
    return 0;
}
