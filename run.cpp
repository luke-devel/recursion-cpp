// Author : Luke Olson
// Takes in size of array and completes multiple recursive functions

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;

int size;

void createArr(int, int x[]);
void displayArr(int, int x[]);
void reverseArr(int, int x[]);
void displaySquares(int, int x[]);
void digitSum(int, int x[]);
void isPrime(int, int x[]);

int main(){
    cout << "*********************************************************\n"
            "***	 Welcome	to	My	Recursion APP ***\n"
            "*********************************************************\n\n"
            "Enter The array size. ( Must be >= 5 ) -> ";
    try{
        cin >> size;
        if(size<5){
            cout << "\nInvalid arrays size. Size must >= 5." << endl;
            return 0;
        }
        }catch(int e){
            cout << "in catch" << endl;
        }

    int firstArr[0];
    int reversedArr[0];

    createArr(size, firstArr);
    displayArr(size, firstArr);
    reverseArr(size, reversedArr);
    displaySquares(size, firstArr);
    digitSum(size, firstArr);
    isPrime(size, firstArr);

    cout << "\nLuke Olson - Student Learning Algorithms " << endl
         << "April 2020\n";
}

void createArr(int size, int arr[]){
    int randNum;
    srand (time(NULL));
    for (int i = 0; i < size; i++) {

        randNum = rand() % 375 + 10;
        arr[i]=randNum;
    }
}

void displayArr(int size, int arr[]){
    cout << "\nThe generated array is  :";
     for (int i = 0; i < size; i++) {
        cout << "  " << arr[i]  << "  ";
    }
}

void reverseArr(int size, int arr[]){
    cout << "\n\nReversed array is  :";
     for (int i = size-1; i > 0; i--) {
        cout << "  " << arr[i]  << "  ";
    }
}

void displaySquares(int size, int arr[]){
    cout << "\n\nTable of square values   1  -   " <<  arr[0]+1 << endl;
    cout << "\nTable of square values 1  -   " << arr[0];
    cout << "\n\nN     N Squared" << endl;
     for (int i = 1; i <= arr[0]+1; i++) {
        cout << i << "     " << i*i << endl;
    }
}

void digitSum(int size, int arr[]){
    cout << "\nSum of its digits   is    ";
    int sum = 0;
     for (int i = 0; i < size; i++) {
        sum+=1;
    }
    cout << sum << endl;
}

void isPrime(int size, int arr[]){
    cout << "\nIs it prime :   \n\n";
    for (int i = 1; i < size; i++) {
        bool prime = true;
        for(int j = 2; j <= arr[i] / 2; ++j){
        if(arr[i] % j == 0){
            prime = false;
            break;
            }
        }
        if(prime){
            cout << "The number   " << arr[i] << "   is Prime" << endl;
        }
        else{
            cout << "The number   " << arr[i] << "   is Not Prime" << endl;
        }
    }
}
