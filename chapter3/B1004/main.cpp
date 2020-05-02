#include<cstdio>
#include<cstring>
struct student{
    char name[15];
    char id[15];
    int grade;
};
//将b的值赋给a

int main()
{
    student temp,ans_min,ans_max;
    ans_min.grade=101;
    ans_max.grade=-1;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s%s%d",&temp.name,&temp.id,&temp.grade);
        if(temp.grade>ans_max.grade)
            ans_max=temp;
        if(temp.grade<ans_min.grade)
            ans_min=temp;
    }
    printf("%s %s\n%s %s\n",ans_max.name,ans_max.id,ans_min.name,ans_min.id);

    return 0;
}
