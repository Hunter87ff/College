//write a program to enter day and extract how many yr, month, day is in that day

#include <stdio.h>

int main(){
	int d, yr, m, day;
	printf("Enter day : ");
	scanf("%d", &d);
	yr = d/365;
	m = d%365/30;
	day = d%365%30;
	printf("Year : %d\nMonth : %d\nDay : %d", yr, m, day);
	return 0;
}
