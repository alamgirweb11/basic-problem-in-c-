#include<iostream>
using namespace std;

int main(){

// problem : 1^2+2^2+3^2+.....+n^2
 int num, sum = 0, i;

 cout << "Enter any number : ";

 cin >> num;

 for(i = 1; i <= num; i++){

    sum = sum + (i*i);

 }
    cout << "Total some of series = " << sum;

return 0;
}
