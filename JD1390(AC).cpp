// 688894	zhuli19901106	1390	Accepted	����˴��鿴����case��ִ�н��	1020KB	362B	0MS
// 201402020104
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	const int MAXN = 71;
	long long int res[MAXN];

	res[0] = res[1] = 1;
	int i;
	for (i = 2; i < MAXN; ++i) {
		res[i] = res[i - 2] + res[i - 1];
	}

	while (scanf("%d", &i) == 1) {
		printf("%lld\n", res[i]);
	}

	return 0;
}