#include <cstdio>
struct Poly{
    int exp;//指数
    double cof;//系数
}Poly[1001];//第一个多项式
double ans[2001];//存放结果
int main()
{
    int n,m,num = 0;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%d %lf",&Poly[i].exp,&Poly[i].cof);
    }
    scanf("%d",&m);
    for(int i = 0;i<m;i++){
        int exp=0;
        double cof=0;
        scanf("%d %lf",&exp,&cof);
        for(int j =0;j<n;j++){
            ans[exp+Poly[j].exp]+=(cof*Poly[j].cof);
        }
    }
    for(int i=0;i<2001;i++){
        if(ans[i]!=0)
            num++;
    }
    printf("%d",num);
    for(int i=2000;i>=0;i--){
        if(ans[i]!=0)
            printf(" %d %.1f",i,ans[i]);
    }
    return 0;
}
