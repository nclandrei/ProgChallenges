#include <iostream>

using namespace std;

int prime(int n){
    int d=2;
    while(d<=n/2)
        if(n%d==0)
            return 0;
        else
            d++;
    return 1;
}

void get_prime_numbers(int n) {
    int i;
    for(i=2;i<n;i++)
        if(prime(i))
            cout << i << " ";
}
