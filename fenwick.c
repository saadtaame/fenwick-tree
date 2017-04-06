
#include <stdio.h>

const int N = 1000010;
int t[N];

int get(int i) {
	int sum = 0;
	while(i > 0) {
		sum += t[i];
		i &= i - 1;
	}
	return sum;
}

void inc(int i, int v) {
	while(i < N) {
		t[i] += v;
		i = (i | (i - 1)) + 1;
	}
}

int main(void) {
	
	inc(1, 1);
	inc(2, 3);
	printf("%d\n", get(3));
	return 0;
}
