#include <cstdio>

int main()
{
    int a[1010] = {0};
    int k,e,num = 0;//k为系数,e为指数,num计数不为零的导数项个数
    while(scanf("%d%d",&k,&e)!=EOF){//输入系数和指数直到文件末尾
        a[e] = k;
    }
    a[0]=0;//零次项求导之后直接为零
    for(int i=1; i<=1000;i++){
        a[i-1]=a[i]*i;//求导公式
        a[i]=0;
        if(a[i-1]!=0)num++;//num计数不为零的导数项个数
    }
    if(num==0) printf("0 0");//特例
    else {
        for(int i=1000;i>=0;i--){
            if(a[i]!=0){
                printf("%d %d",a[i],i);
                num--;
                if(num!=0)printf(" ");
            }
        }
    }
    return 0;
}
