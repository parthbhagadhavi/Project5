



#include <stdio.h>

int main() {
    int num;
    int fd;
    int ld;
    int sum;
    
    
    printf("my name is soya parth \n");
    printf("question :-3 \t Write a Program to find the sum of a first and the last digit of a number.\n");
    printf("Enter any number: ");
    scanf("%d", &num);
    
    
    fd= num;
    while(fd >= 10) {
        fd/= 10;
    }
    
    
    ld = num% 10;
    
    
    sum = fd + ld;
    
    printf("The sum of the first and the last digit: %d\n", sum);
    printf("thank you so much ☺️");
    
    
}

