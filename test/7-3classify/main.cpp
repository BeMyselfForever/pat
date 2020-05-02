#include <iostream>
#include <unordered_map>
using namespace std;
const int N = 10010;
string kind[4] = {"Gan laji", "Shi laji", "Ke Hui Shou", "You Hai laji"};
unordered_map<string, int> mp;

int main()
{
	int n;
	scanf("%d", &n);
	char s[15];
	for(int i = 0; i < n; i++)
	{
		int t;
		scanf("%s%d", &s, &t);
		string str(s);
		mp[str] = t - 1;
	}

	while(scanf("%s", &s))
	{
		string qu(s);
		if(qu == "#")
			break;
		if(mp.count(qu))
			printf("%s\n", kind[mp[qu]].c_str());
		else
			printf("?\n");
	}
	return 0;
}
