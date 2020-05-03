#include <cstdio>
#include <cstring>
int main()
{
    char str[100];
    scanf("%s",&str);
    int n=strlen(str);
    char ans[n+5][n+5];
    int n1=(n+2)/3,n3=n1,n2=n+2-2*n1;
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            ans[i][j]=' ';
        }
    }
    int pos=0;
    for(int i=1;i<=n1;i++){
        ans[i][1]=str[pos++];
    }
    for(int i=2;i<=n2;i++){
        ans[n1][i]=str[pos++];
    }
    for(int i=n3-1;i>=1;i--){
        ans[i][n2]=str[pos++];
    }
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            printf("%c",ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
