#include<cstdio>
//����a+b��d������
int main(){
    int a,b,d;
    scanf("%d%d%d",&a,&b,&d);
    int sum = a+b;
    int ans[31],num = 0;//ans���d���Ƶ�ÿһλ
    do{//����ת��
        ans[num++] = sum%d;
        sum /=d;
    }while(sum);
    for(int i = num-1 ;i>=0;i--){//�Ӹ�λ����λ���
        printf("%d",ans[i]);

    }
    return 0;
}
