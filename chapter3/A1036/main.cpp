#include <cstdio>
struct stu{
    char name[15];
    char gender;
    char id[15];
    int score;
}female,male,temp;
int main()
{
    int n;
    female.score=-1;male.score=101;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %c %s %d",&temp.name,&temp.gender,&temp.id,&temp.score);
        if(temp.gender=='F'&& temp.score>female.score)female=temp;
        else if(temp.gender=='M' && temp.score<male.score)male=temp;
    }
    if(female.score==-1)
        printf("Absent\n");
    else
        printf("%s %s\n",female.name,female.id);
    if(male.score==101)
          printf("Absent\n");
    else
        printf("%s %s\n",male.name,male.id);
    if((female.score==-1)||(male.score==101)){
        printf("NA\n");
    }
    else
        printf("%d\n",female.score-male.score);
    return 0;
}
