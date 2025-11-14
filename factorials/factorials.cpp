#include <iostream>
using namespace std;

//it is the function to calculate factorial
long long factorialIterative(int n) {
    if (n < 0) { //agar n negative hai ya 0 se chota hai to
        return -1; 
    }
    if (n == 0 || n == 1) { //agar n 0 ya 1 hai to
        return 1;
    }
    
    long long result = 1;
    //agar n 1 se bada hai to loop use karke factorial nikalna hai
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    int n;
cout << "Enter a positive integer between 1--20: "; //user se input lena hai
    cin >> n;
    long long result = factorialIterative(n);
 

    if (result == -1) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << n << " is: " << result << endl;
    }

    return 0;
}