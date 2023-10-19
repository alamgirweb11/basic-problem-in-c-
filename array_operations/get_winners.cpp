#include<bits/stdc++.h>
using namespace std;

int main(){

int points[15] = {};

// game play time

 for(int i=0; i<10; i++){

      int participant_id;

      cout << "Enter participant id: ";

      cin >> participant_id;

      points[participant_id - 1]++;

 }

 // print points

 cout << "Points : ";
 for(int i=0; i<10; i++){
       cout << points[i] << " ";
 }

return 0;
}
