#include <stdio.h>
#include <stdbool.h>

bool isZero(int input) {

	if (input <= 0) {
		return true;
	} else {
		return false;
	}

}

int main() {
	
	int n = 1;
	int count = 0;
	int sum = 0;
	float avg = 0;

	while (n > 0) {
	
	printf("enter a number : ");
	scanf("%d", &n);
	if (isZero(n)) {break;}
	sum += n;
	count++;
	avg = 1.0*(sum)/(count);

	}
	
	printf("Your Sum is %d\n",sum);
	printf("Your Avg is %.2f\n",avg);

}

