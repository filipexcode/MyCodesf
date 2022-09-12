#include <stdio.h>

int main() {
	double A,B,Apeso,Bpeso,media;
	
	scanf ("%lf""%lf",&A,&B);	
	
	Apeso = A * 3.5;
	Bpeso = B * 7.5;
	media = (Apeso + Bpeso)/11;
	
	printf ("MEDIA = %.5lf\n", media);

	return 0;
}
