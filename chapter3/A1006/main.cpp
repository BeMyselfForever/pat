#include<cstdio>
struct stu{
    char id[20];
    int hh,mm,ss;
}temp,ansin,ansout;
bool LessEqu(stu a,stu b){
    if(a.hh<b.hh) return true;
    else if(a.hh==b.hh){
        if(a.mm<b.mm) return true;
        else if(a.mm==b.mm)
            if(a.ss<=b.ss)return true;
    }
    return false;
}
int main()
{
    int n;
    ansout.hh=0;ansout.mm=0;ansout.ss=0;
    ansin.hh=24;ansin.mm=24;ansin.ss=24;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s%d:%d:%d",&temp.id,&temp.hh,&temp.mm,&temp.ss);
        if(LessEqu(temp,ansin))ansin=temp;
        scanf("%d:%d:%d",&temp.hh,&temp.mm,&temp.ss);
        if(LessEqu(ansout,temp))ansout=temp;
    }
    printf("%s %s\n",ansin.id,ansout.id);
    return 0;
}
