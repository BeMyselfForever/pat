#include<cstdio>
const int N=54;
char mp[5]={'S','H','C','D','J'};//�Ƶı���뻨ɫ�Ķ�Ӧ��ϵ
int starts[N+1],ends[N+1],next[N+1];//next������ÿ��λ���ϵ����ڲ������λ��
int main()
{
    int K;
    scanf("%d",&K);
    for(int i=1;i<=N;i++){
        starts[i]=i;//��ʼ���Ƶı��
    }
    for(int i=1; i<=N;i++){
        scanf("%d",&next[i]);//����ÿ��λ���ϵ����ڲ������λ��
    }
    for(int step=0;step<K;step++){
        for(int i=1;i<=N;i++){
            ends[next[i]]=starts[i];//�ѵ�i��λ�õ��Ƶı�Ŵ���λ��next[i]
        }
        for(int i= 1;i<=N;i++){
            starts[i]=ends[i];//��ends���鸳ֵ��start�����Թ��´β���ʹ��
        }
    }
    for(int i=1; i<=N;i++){
        if(i!=1) printf(" ");
        starts[i]--;
        printf("%c%d",mp[starts[i]/13],starts[i]%13+1);//������
    }
    /*
*/
    return 0;
}
