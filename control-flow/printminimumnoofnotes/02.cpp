#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int price500, price100, price50, price20, price10, price5, price2, price1 = 0;

    if(n >= 500){
        price500 = n/500;
        n -= price500 * 500;
        cout << "500 notes: " << price500 << endl;
    } if(n >= 100){
        price100 = n/100;
        n -= price100 * 100;
        cout << "100 notes: " << price100 << endl;
    } if(n >= 50){
        price50 = n/50;
        n -= price50 * 50;
        cout << "50 notes: " << price50 << endl;
    } if(n >= 20){
        price20 = n/20;
        n -= price20 * 20;
        cout << "20 notes: " << price20 << endl;
    } if(n >= 10){
        price10 = n/10;
        n -= price10 * 10;
        cout << "10 notes: " << price10 << endl;
    } if(n >= 5){
        price5 = n/5;
        n -= price5 * 5;
        cout << "5 notes: " << price5 << endl;
    } if(n >= 2){
        price2 = n/2;
        n -= price2 * 2;
        cout << "2 notes: " << price2 << endl;
    } if(n >= 1){
        price1 = n/1;
        cout << "1 notes: " << price1 << endl;
    }
    return 0;
    
}