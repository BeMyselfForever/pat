#include <cstdio>

const char ans[]={'0','1','2','3','4','5','6','7','8','9','A','B','C'};
int main()
{
    int r,g,b;
    int temp;
    scanf("%d %d %d",&r,&g,&b);
    printf("#");
    printf("%c%c",ans[r/13],ans[r%13]);
    printf("%c%c",ans[g/13],ans[g%13]);
    printf("%c%c",ans[b/13],ans[b%13]);
    return 0;
}
