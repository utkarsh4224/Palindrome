#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");//111
    scanf("%d", &n);
    original = n;
    do{
        remainder = n % 10;//111%10=1
        reversed = reversed * 10 + remainder;//reversed=0*10+1=1
        n /= 10;//111/10=11
    }
    while (n != 0);
    if (original == reversed)
        printf("%d is a palindrome.", original);//111 is a palindrome
    else
        printf("%d is not a palindrome.", original);
    return 0;
}
