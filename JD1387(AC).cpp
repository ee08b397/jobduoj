// 651776	zhuli19901106	1387	Accepted	����˴��鿴����case��ִ�н��	1020KB	456B	0MS
// 201311151646
#include   <cstdio>
using namespace std;

int main()
{
	int n, i;
	long long int f1, f2, f3;
	
	while(scanf("%d", &n) == 1){
		if(n == 0){
			printf("0\n");
			continue;
		}
		if(n == 1){
			printf("1\n");
			continue;
		}
		f1 = 0;
		f2 = 1;
		for(i = 1; i < n; ++i){
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		
		printf("%lld\n", f3);
	}
	
	return 0;
}