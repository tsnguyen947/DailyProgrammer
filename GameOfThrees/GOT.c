#include <stdio.h>

void play(int input){
	while(input != 1){
		if(input == 0){
			printf("0 1\n");
			break;
		}
		else if(input % 3 == 1 || input % 3 == -2){
			printf("%d -1\n", input);
			input--;
		}
		else if(input % 3 == 2 || input % 3 == -1){
			printf("%d 1\n", input);
			input++;
		}
		else{
			printf("%d 0\n", input);
		}
		input /= 3;
	}
	printf("1\n");
}

int main(int argc, char *argv[]){
	int input;
	if(argc == 2){
		input = atoi(argv[1]);
	}
	play(input);
	return 0;
}
