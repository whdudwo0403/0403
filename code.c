<<<<<<< HEAD
#include <stdio.h>
int main(void){
	int num1, num2, num3, multiply;
	float fnum1, fnum2, fmultiply;

	printf("두 정수를 입력하세요 : ");
	scanf("%d%d", &num1, &num2);
	multiply = num1 * num2;
	fnum1 = num1;
	fnum2 = num2;	
	fmultiply = fnum1 * fnum2;
	printf("%d * %d = %d \n", num1, num2, multiply); 
	printf("%.2f * %.2f = %.2f\n", fnum1, fnum2, fmultiply); 
	return 0;
=======
#include <stdio.h>
int main(void){
	int num1, num2, num3, multiply;
	float fnum1, fnum2, fmultiply;

	printf("두 정수를 입력하세요 : ");
	scanf("%d%d", &num1, &num2);
	multiply = num1 * num2;
	fnum1 = num1;
	fnum2 = num2;	
	fmultiply = fnum1 * fnum2;
	printf("%d * %d = %d \n", num1, num2, multiply); 
	printf("%.2f * %.2f = %.2f\n", fnum1, fnum2, fmultiply); 
	return 0;
>>>>>>> 76e5e246168451a78914d5d30225569b494f5308
}