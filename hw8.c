# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

double A(int * ptr1) {
	double s=0,a,sum=0,q;
	int i;

	for (i = 0; i < 5; i++) {
		sum += ptr1[i];
	}

	a = (float)sum / 5;
	

	for (i = 0; i < 5; i++) {
		s += pow(ptr1[i] - a,2);
	}
	s = (float)s / 5.0;
	
	q = sqrt(s);
	return q;
}

int main(void) {
	int num[5];
	double a;

	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	

	a = A(num);
	printf("%.3f", a);
	
	return 0;
}	
