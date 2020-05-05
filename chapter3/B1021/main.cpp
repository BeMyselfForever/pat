#include <cstdio>
#include<cstring>
int main()
{
    char str[1010];
    scanf("%s",&str);
    int len=strlen(str);
    int num[10]={0};
    for(int i=0;i<len;i++){
        num[str[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        if(num[i]!=0){
            printf("%d:%d\n",i,num[i]);
        }
    }
    return 0;
}
