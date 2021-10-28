#include <iostream>
using namespace std;

//pseudo code 
/*
    1- Get Inputs From User
    2- max ==> first Number
    2- Loop through Numbers 
        if Number > max 
            max= Number
        else 
            do nothing
*/

int main(){
        //Get Inputs From User
    int n;
    cout<< "please Enter Numbers";
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    // max ==> first Number
    int max = numbers[0];
     for (int i = 0; i < n; i++)
    {
        if (numbers[i] > max ){
            max = numbers[i];
        }
    }
    cout << "max number is " << max;


}