// 688726	zhuli19901106	1356	Accepted	����˴��鿴����case��ִ�н��	1020KB	326B	310MS
// 201402011758
#include <cstdio>
using namespace std;

int main()
{
	int n, m;
	int i;
	int res;

	while (scanf("%d", &n) == 1 && n) {
		scanf("%d", &m);
		res = 0;
		for (i = 2; i <= n; ++i) {
			res = (res + m) % i;
		}
		++res;
		printf("%d\n", res);
	}

	return 0;
}
