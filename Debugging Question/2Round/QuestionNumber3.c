#include <stdio.h>
int main() {
    int n = 5, fact = 0; 
    for(int i = 1; i <= n; i++); 
        fact = fact * i;         
    printf("%d", fact);
    return 0;
}
