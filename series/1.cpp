#include<iostream>
using namespace std;

int main(){

// problem : 1+2+3+.....+n
 int num, sum = 0, i;

 cout << "Enter any number : ";

 cin >> num;

 for(i = 1; i <= num; i++){

    sum = sum + i;

 }
    cout << "Total some of series = " << sum;

return 0;
}
