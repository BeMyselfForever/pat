#include<cstdio>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    m = m%n;
    int a[n+5];
    for(int i =0;i<n;i++){
        scanf("%d",&a[(i+m)%n]);
    }
    for(int i = 0; i<n-1; i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[n-1]);
    return 0;
}

