#include <iostream>

using namespace std;
int main() {
    int n;
    
    cout << "Enter a number to find its Primorial: ";
    cin >> n;
    
    int result = primorial(n);
    cout << "The Primorial of " << n << " is: " << result << endl;
    
    return 0;
}
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int primorial(int n) {
    int product = 1;
    int count = 0;  
    int num = 2;    

    while (count < n) {
        if (isPrime(num)) {
            product *= num;  
            count++;         
        }
        num++;  
    }

    return product;
}


