#include<cstdio>
const int G=17*29;
const int S=29;
int main()
{
    int a1,b1,c1;
    int a2,b2,c2;
    scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);
    int price = a1*G+b1*S+c1;
    int money = a2*G+b2*S+c2;
    int change = money-price;
    if(change<0){
        printf("-");
        change=-change;
    }
    printf("%d.%d.%d\n",change/G,change%G/S,change%S);
    return 0;
}
