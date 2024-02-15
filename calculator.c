//TRACY NAMAYI 
// ENE212-0067/2021

#include<stdio.h>
int main(){
	double num1;
	double num2;
	double sum;
	double difference;

	printf("Enter the first number:  ");
	scanf("%lf",&num1);
	printf("Enter the second number:  ");
	scanf("%lf",&num2);
	
	sum = num1 + num2;
	difference = num1 - num2;
	
	printf("Your total is %lf\n", sum);
	printf("Your difference is %lf\n", difference);
	
	
	return 0; 
}
	
