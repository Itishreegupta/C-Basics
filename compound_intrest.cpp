#include <bits/stdc++.h>
using namespace std;
int main(){
    float p,r,t;
    float amount,CI;
    cout << "enter principal value : ";
    cin >> p;
    cout << "enter rate of intrest : ";
    cin >> r;
    cout << "enter time : ";
    cin >> t;
    amount = p * (pow((1 + r /100),t));
    cout << "The amount is : " << amount << endl;
    CI = amount - p;
    cout << "the compound intrest is : " << CI;
}