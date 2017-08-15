include <stdio.h>


int dodaj(int x, int y) {
	return x+y;
}

int odejmowanie(int x, int y) {
	return x-y;
}

int main() {
	printf("Hello wordl");
	printf('%d',dodaj(2,3));
	printf("%d".odejmowanie(5,6));
	return 0;
}
