#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int number =x;
    int reverse_number = 0;

    while(number){
        reverse_number = (reverse_number * 10) + (number%10) ;
        number /= 10;
    }
    
    return x == reverse_number;
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}