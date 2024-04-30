
#include <stdio.h>

int main() {

    char let = 'a';
    
    printf("my name is soya parth \n");
    printf("question 1:-\tWrite a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.\n");
    do {
        printf("%c,\n ", let);
        let += 4; 
    } while (let <= 'z');
    
    printf("thank you so much ☺️");
}
