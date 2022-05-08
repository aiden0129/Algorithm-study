#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* int main(int argc, char* argv[]) { 
	for(int i=0; i<9; i++){
	{
		for(int j=0; j<i; j++)
		printf("*");
	}
	printf("\n");	
	}
	
	return 0;
}*/


/* int solution(int numbers[], size_t numbers_len) { // 
    int answer = -1;
    int sum = 45;
    numbers_len = sizeof(numbers);
    for(int i = 0; i < 9; i++){
        scanf("%d", &numbers[i], numbers_len);
    }
    for(int j = 0; j < numbers_len; j++ ){
        answer = sum - numbers[j];
    }
    return answer;
}*/

/* int main(void){ 
	int array[9];
	for(int i = 0; i < 9; i++){
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < 9; i++){
		printf("%d", array[i]);
	}
	return 0;
} */

int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;
	for(int i = 0; i < a_len; i++){
		answer = answer + a[i] * b[i];		
	}
	printf("%d\n", answer);
	return answer;
}

int main(void){
	int a[] = {1, 2, 3, 4};
	int b[] = {-3, -1, 0, 2};
	int a_len = sizeof(a) / sizeof(int), b_len = sizeof(b) / sizeof(int);
	
	solution(a, a_len, b, b_len);
}

