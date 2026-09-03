#include<stdio.h>
#include<stdbool.h>
int main()
{
	int age = 19;
	float temperature = 36.5;
	double pi = 3.14159;
	char grade ='A';
	bool isstudent = true;
	printf("Integer value: %d, size: %zu bytes\n" , age ,sizeof(age));
	printf("Float value: %f , size: %zu bytes\n", temperature, sizeof(temperature));
	printf("Double value: %1f, size: %zu bytes\n", pi, sizeof(pi));
	printf("Character value: %c, size: %zu bytes\n" , grade, sizeof(grade));
	printf("Boolean value: %d, size: %zu bytes\n" , isstudent, sizeof(isstudent));
	return 0;
}
