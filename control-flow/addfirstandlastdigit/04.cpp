#include<iostream>
using namespace std;

int main(){
    int first_side, last_side, sum, number;
    cout << "Enter the number: ";
    cin >> number;

    int last_digit = number % 10;

    while(number >= 10){
        number /= 10;
    }
    first_side = number;
    sum = first_side + last_digit;
    cout << "The sum of the first and last digit is: " << sum << endl;
    return 0;
}