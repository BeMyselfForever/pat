#include<cstdio>
const int maxsize = 100010;

    int score[maxsize]={0};

int main(){

    int n,i,temp;
    scanf("%d",&n);
    for(int j = 0;j<n;j++){
        scanf("%d %d",&i,&temp);
        score[i] += temp;
    }
    int num=1;
    temp = -1;
    for(int j=1;j<=n;j++){
        if(score[j]>temp){
            temp=score[j];
            num = j;
        }
    }
    printf("%d %d\n",num,temp);
    return 0;
}
