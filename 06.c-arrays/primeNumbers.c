#include <stdio.h>
#include <stdbool.h>

int main(){

    int p;
    int i;

    int primes[50] = {[0] = 2, [1] = 3};
    int primeIndex = 2;

    bool isPrime;

    for(p=5; p<=100; p+=2){
        isPrime = true;
        
        for(i = 1; isPrime && p/primes[i]>=primes[i]; i++){
            if(p % primes[i]==0){
                isPrime = false;
            }
        }
        if(isPrime){
            primes[primeIndex] = p;
            primeIndex++;
        }
    }

    for(i=0; i<primeIndex;i++){
        printf("\n%i", primes[i]);
    }

    return 0;
}