#include <cstdio>

int main()
{
    int a[1010] = {0};
    int k,e,num = 0;//kΪϵ��,eΪָ��,num������Ϊ��ĵ��������
    while(scanf("%d%d",&k,&e)!=EOF){//����ϵ����ָ��ֱ���ļ�ĩβ
        a[e] = k;
    }
    a[0]=0;//�������֮��ֱ��Ϊ��
    for(int i=1; i<=1000;i++){
        a[i-1]=a[i]*i;//�󵼹�ʽ
        a[i]=0;
        if(a[i-1]!=0)num++;//num������Ϊ��ĵ��������
    }
    if(num==0) printf("0 0");//����
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
