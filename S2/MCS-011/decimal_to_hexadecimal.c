#include <stdio.h>

int main() {
	char hexadecimal_num[100];
	int decimal_num, reminder, quotient, i, j = 0;
	scanf("%d", &decimal_num);
	quotient = decimal_num;

	while(quotient > 0) {
	reminder = quotient % 16;
	quotient = quotient / 16;
		if(reminder < 10) {
			hexadecimal_num[i] = 48 + reminder;
		} else {
			hexadecimal_num[i] = 55 + reminder;
		}
		i++;
	}
	printf("%s", hexadecimal_num);
}
