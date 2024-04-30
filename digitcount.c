


#include <stdio.h>

int main() {
    int num;
    int cou=0;
    printf("my name is soya parth \n");
    printf("question:-2 \tWrite a Program to count the total number of digits in a number.\n");
    printf("Enter any number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        num/= 10;
        cou++;
    }
    
    printf("Total number of digits: %d\n", cou);
    printf("thank you so much ☺️");

}
