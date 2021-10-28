#include <iostream>
using namespace std;

//pseudo code 

/*
1- get inputs from user
2- 1 2 3 4
3- sum = 0 
4 - loop through numbers
    sum = sum+current Number
*/


int main() {

    int n;
    //get inputs from user
    cout << "enter Number ";
    cin >> n;
    // 1 2 3 4
    int numbers[n];
    for ( int i = 0 ; i < n; i++)
    {
        cin >> numbers[i];
    }
    // sum = 0 
    int sum = 0;
    //  loop through numbers
  for ( int i = 0; i < n ; i++)
    {
        sum = sum + numbers[i];
    }

    cout << "the sum == " << sum; 

}