#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int col =0,row = 0;
    char c;
    scanf("%d",&col);
    getchar();
    scanf("%c",&c);
    if(!(col%2)) row = col/2;
    else row = col/2+1;
    for(int i=0;i<row;i++){
            for(int j = 0; j<col;j++){
                if(i==0||i==(row-1)||j==0||j==(col-1)){
                    printf("%c",c);
                }
                else printf(" ");
            }
        printf("\n");
    }
    return 0;
}
