#include<stdio.h>
int main(){
	int a,fat;
	scanf("%d", &a);
	fat = 1;
	while (a != 0){
		fat = fat * a;
		a = a-1;
	}
	printf("%d\n", fat);
return 0;
}
