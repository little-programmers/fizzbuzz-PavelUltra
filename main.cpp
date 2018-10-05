#include<conio.h>
#include<stdio.h>

void FizzBuzz (int a, int b){
	for(; a<b;a++){
		
	if(a%5==0 && a%3==0)
		printf("fizzBuzz\n");
			
	else if(a % 5 == 0)
		printf("Buzz\n");
	
	else if (a%3==0)
		printf("Fizz\n");
		
	else 
	printf("%d\n",a);
}
}

main(){
	FizzBuzz(0 ,100);
	return 0;
}
