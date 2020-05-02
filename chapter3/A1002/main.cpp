#include<cstdio>
const int MAXN= 1010;
double ap[MAXN]={0},bp[MAXN]={0};
double res[MAXN]={0};
int num = 0;
int main()
{
    int an,bn;
    scanf("%d",&an);
    for(int i=0;i<an;i++){
        double k;
        int e;
        scanf("%d%lf",&e,&k);
        ap[e]=k;
    }
    scanf("%d",&bn);
    for(int i=0;i<bn;i++){
        double k;
        int e;
        scanf("%d%lf",&e,&k);
        bp[e]=k;
    }
    for(int i = 0; i<=1000;i++){
        if(ap[i]||bp[i]){
            res[i]=ap[i]+bp[i];
            if(res[i])num++;
        }
    }
    printf("%d",num);
    for(int i =1000;i>=0;i--){
        if(res[i]!=0){
            printf(" %d %.1f",i,res[i]);
            num--;
            if(!num) break;
        }
    }
    printf("\n");
    return 0;
}

/*4 4 0.5 2 5.6 1 -2.7 0 3.6
3 3 -2.1 2 -5.6 1 2.7*/
