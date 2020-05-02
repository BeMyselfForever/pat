#include <iostream>
#include <unordered_set>
using namespace std;
const int N = 110;
int n, t, cnt;
unordered_set<int> s;

int cal(int x)
{
	int ans = 0;
	while(x)
	{
		int t = x % 10;
		ans += t * t * t;
		x /= 10;
	}
	return ans;
}

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		s.clear();
		cnt = 0;
		scanf("%d", &t);
		while(true)
		{
			if(t == 1)
			{
				printf("%d\n", cnt);
				break;
			}
			s.insert(t);
			t = cal(t);
			cnt++;
			if(s.count(t) != 0)
			{
				printf("%d\n", t);
				break;
			}
		}
	}
	return 0;
}
