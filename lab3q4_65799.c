#include <stdio.h>
int main(){
int a = 1;
int sum = 0;
int count = 0;
while(a >0){
	printf("Input your number :\n");
	scanf("%d",&a);
	if(a>0){
		sum += a;
		count++;
	}
}
printf("Sum: %d Avg: %f",sum,(double)sum/count);
return 0;
}	
