#include <cstdio>
struct person{
    char name[10];
    int yy,mm,dd;
}left,right,oldest,youngest,temp;

//日期小的年龄大
bool LessEqu(person a,person b){
    if(a.yy<b.yy) return true;
    else if(a.yy==b.yy){
        if(a.mm<b.mm) return true;
        else if(a.mm==b.mm)
            if(a.dd<=b.dd)return true;
    }
    return false;
}
int main()
{
    int n,num=0;
    left.yy=youngest.yy=1814;left.mm=youngest.mm=9;left.dd=youngest.dd=6;
    right.yy=oldest.yy=2014;right.mm=oldest.mm=9;right.dd=oldest.dd=6;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d/%d/%d",&temp.name,&temp.yy,&temp.mm,&temp.dd);
        if(LessEqu(temp,right)&&LessEqu(left,temp)){
            num++;
            if(LessEqu(youngest,temp))youngest=temp;
            if(LessEqu(temp,oldest))oldest=temp;
        }
    }
    if(num!=0)
        printf("%d %s %s\n",num,oldest.name,youngest.name);
    else
        printf("0\n");
    return 0;
}
