#include <iostream>
#include <cstdio>
using namespace std;
int group[200]={0};
int main()
{
    int n,item;
    int i =0;

    while(scanf("%d",&n)!=EOF){
    for(i = 0; i<n;i++){
        scanf("%d",&group[i]);
    }
    scanf("%d",&item);
    for(i = 0; i<n;i++){
        if(group[i]==item){
            printf("%d\n",i);
            break;
        }
    }
    if(i==n){
        printf("-1\n");
    }
    }
    return 0;
}
