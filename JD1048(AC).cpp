#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
	int a, b, c;

	while (scanf("%d%d%d", &a, &b, &c) == 3) {
		if (a > b) {
			swap(a, b);
		}
		if (a > c) {
			swap(a, c);
		}
		if (b > c) {
			swap(b, c);
		}

		if (a * a + b * b > c* c) {
			printf("���������\n");
		} else if (a * a + b * b < c * c) {
			printf("�۽�������\n");
		} else {
			printf("ֱ��������\n");
		}
	}

	return 0;
}