#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define buf 200

char input[buf];
char unused[buf];


void localtime(int rawtime) {
	asm("jmp %rsp");
	asm("pop %rdi");
	asm("pop %rsi");
	asm("mov (%rdi), %rsi");

}

void ignore_me_init_buffering() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

void get_inp_user() {
    printf("Everything is crumbling.. what should we do, sir?\n");
    gets(input);
    printf("If only there was an..\n");
}

void get_format_string(char *input, size_t size) {
    printf("Enter format string: ");
    fgets(input, size, stdin);
}

void opportunity(int num) {
	setuid(num);
	setgid(num);
}


int main() {
	ignore_me_init_buffering();
        get_inp_user();
	return 0;
 }
