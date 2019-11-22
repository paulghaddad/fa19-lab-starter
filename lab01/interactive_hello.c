#include <stdio.h>

#define MAX_LEN 80

int main(int argc, char *argv[]) {
    char a_word[MAX_LEN];

    printf("What's your name?\n");
    fgets(a_word, MAX_LEN, stdin);
    printf("Hey, %sI just really wanted to say hello to you.\nI hope you have a wonderful day.", a_word);

    return 0;
}

/*
 * To avoid needing user input to debug this program, we can:
 * 1. Use a pipe: `echo 'Paul' | ./int_hello`
 * 2. Or input redirection: `./int_hello < input.txt`
 */
