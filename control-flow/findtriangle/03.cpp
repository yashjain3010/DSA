#include<iostream>
using namespace std;

int main(){
    int first_side, second_side, third_side;
    cout << "Enter the first side: ";
    cin >> first_side;
    cout << "Enter the second side: ";
    cin >> second_side;
    cout << "Enter the third side: ";
    cin >> third_side;

    if(first_side == second_side && second_side == third_side){
        cout << "Equilateral triangle" << endl;
    } else if(first_side == second_side || second_side == third_side || first_side == third_side){
        cout << "Isosceles triangle" << endl;
    } else{
        cout << "Scalene triangle" << endl;
    }
}