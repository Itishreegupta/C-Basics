#include <iostream>
using namespace std;
int main(){
    int num1,num2,swap;
    cout << "enter a number 1 : " << endl;
    cin >> num1;
    cout << "enter a number 2 : " << endl;
    cin >> num2;

    cout <<"The number before swaping]: number 1 is  "<< num1 << " and number 2 is " << num2 << endl;
    
    swap = num1;
    num1 = num2;
    num2 = swap;

     cout <<"The number after swaping: number 1 is "<< num1 << "and number 2 is" << num2 << endl;
}