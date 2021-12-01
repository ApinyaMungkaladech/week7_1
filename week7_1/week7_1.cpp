#include<stdio.h>
int highnum();
int main() {
	highnum();
}

int highnum() {
int n[2];
	for (int i = 0; i < 2; i++) {
		printf("Enter number : ");
		scanf_s("%d", &n[i]);
	}
	if (n[0] > n[1])
		printf("%d", n[0]);
	else if (n[1] > n[0])
		printf("%d", n[1]);
	return 0;
}