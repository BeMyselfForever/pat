#include <cstdio>
char s[]={'W','T','L'};
int main()
{
    double temp,a,ans=1;
    int id;
    for(int i=0;i<3;i++){
        temp=0;
        for(int j=0;j<3;j++){
        scanf("%lf",&a);
        if(a>temp){temp=a;id=j;}
        }
        ans*=temp;
        printf("%c ",s[id]);
    }
    printf("%.2f\n",(ans*0.65-1)*2);
    return 0;
}
