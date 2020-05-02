#include<cstdio>
const int maxn=1010;
struct Student{
    long long id;//×¼¿¼Ö¤ºÅ
    int examSeat;//¿¼ÊÔ×ùÎ»ºÅ
}testSeat[maxn];

int main()
{
    int num,testnum,seat,examseat;
    long long id;
    scanf("%d",&num);
    for(int i =0 ;i<num;i++){
        scanf("%lld%d%d",&id,&seat,&examseat);
        testSeat[seat].id = id;
        testSeat[seat].examSeat=examseat;
    }
    scanf("%d",&testnum);
    for(int i=0;i<testnum;i++){
        scanf("%d",&seat);
        printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examSeat);
    }
    return 0;
}
