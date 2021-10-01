#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	int cnt3 = 0 , cnt5 = 0;
	char str[100];
	strcpy(str , "");
	for(int i = 1 ; i <= 100 ; i++){
		cnt3++;
		cnt5++;
		strcpy(str , "");
		if(cnt3 == 3){ strcat(str , "Fizz"); cnt3 = 0; }
		if(cnt5 == 5){ strcat(str , "Buzz"); cnt5 = 0; }
		if(strcmp(str , "") == 0){
			printf("%d\n" , i);
		}
		else {
			printf("%s\n", str);
		}
	}
	return 0;
}